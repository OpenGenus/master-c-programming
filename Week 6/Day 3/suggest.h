#ifndef SUGGEST
#define SUGGEST
#include <string.h>
#include <limits.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

#define MAX_LENGTH 45
#define MAX_SUGGESTIONS 5

int min(int a, int b, int c)
{
    return a < b ? (a < c ? a : c) : (b < c ? b : c);
}

int levenshtein_distance(const char *s, const char *t)
{
    int n = strlen(s);
    int m = strlen(t);

    if (n == 0)
        return m;
    if (m == 0)
        return n;

    int dp[MAX_LENGTH + 1][MAX_LENGTH + 1];
    for (int i = 0; i <= n; i++)
        dp[i][0] = i;
    for (int j = 0; j <= m; j++)
        dp[0][j] = j;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            int cost = (s[i - 1] == t[j - 1]) ? 0 : 1;
            dp[i][j] = min(dp[i - 1][j] + 1, dp[i][j - 1] + 1, dp[i - 1][j - 1] + cost);
        }
    }
    return dp[n][m];
}

int suggest(const char *word, char suggestions[MAX_SUGGESTIONS][MAX_LENGTH + 1])
{
    int num_suggestions = 0;
    int min_distance = INT_MAX;

    // Open dictionary file
    FILE *file = fopen("dictionary.txt", "r");
    if (file == NULL)
    {
        printf("Error");
        return 0;
    }

    // Read words from dictionary and calculate Levenshtein distance
    char dict_word[MAX_LENGTH + 1];
    while (fscanf(file, "%s", dict_word) != EOF)
    {
        int distance = levenshtein_distance(word, dict_word);
        if (distance < min_distance && distance < 3)
        {
            num_suggestions = 0;
            strcpy(suggestions[num_suggestions], dict_word);
            num_suggestions++;
            min_distance = distance;
        }
        else if (distance == min_distance && distance < 3)
        {
            strcpy(suggestions[num_suggestions], dict_word);
            num_suggestions++;
        }
        if (num_suggestions == MAX_SUGGESTIONS)
        {
            break;
        }
    }

    fclose(file);
    return num_suggestions;
}

#endif