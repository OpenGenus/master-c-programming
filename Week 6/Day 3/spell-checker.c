#include <ctype.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#include "dictionary.h"
#include "suggest.h"

#define MAX_SUGGESTIONS 5
#define MAX_INCRT_WORDS 25

int main()
{
    char str[100];
    printf("\nEnter the string to be checked (characters only): ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;

    if (!loadDictionary())
    {
        printf("\nError while loading dictionary");
        return 1;
    }

    printf("The sentence after checking: ");

    int index = 0, incrt_words = 0;
    char word[MAX_LENGTH + 1];
    char display_suggest[MAX_INCRT_WORDS][MAX_SUGGESTIONS + 1][MAX_LENGTH];

    for (int i = 0, l = strlen(str); i < l; i++)
    {
        char c = str[i];
        if (isalpha(c))
        {
            word[index] = c;
            index++;
        }
        else if (isdigit(c))
        {
            printf("\n Error no numbers...!");
            return 0;
        }
        else if (index > 0)
        {
            word[index] = '\0';
            index = 0;
            if (!check(word))
            {
                printf("\033[1;31m%s\033[0m ", word);
                strcpy(display_suggest[incrt_words][0], word);
                char suggestions[MAX_SUGGESTIONS][MAX_LENGTH + 1];
                int num_suggestions = suggest(word, suggestions);
                if (num_suggestions > 0)
                {
                    for (int i = 0; i < num_suggestions; i++)
                    {
                        strcpy(display_suggest[incrt_words][i + 1], suggestions[i]);
                    }
                }
                incrt_words++;
                printf("%s", " ");
            }
            else
            {
                printf("\033[1;34m%s\033[0m ", word);
                printf("%s", " ");
            }
        }
    }
    if (index > 0)
    {
        word[index] = '\0';
        if (!check(word))
        {
            printf("\033[1;31m%s\033[0m ", word);
            strcpy(display_suggest[incrt_words][0], word);
            char suggestions[MAX_SUGGESTIONS][MAX_LENGTH + 1];
            int num_suggestions = suggest(word, suggestions);
            if (num_suggestions > 0)
            {
                for (int i = 0; i < num_suggestions; i++)
                {
                    strcpy(display_suggest[incrt_words][i + 1], suggestions[i]);
                }
            }
            incrt_words++;
        }
        else
        {
            printf("\033[1;34m%s\033[0m ", word);
        }
    }
    if (incrt_words > 0)
    {
        printf("\n\033[1;33m___Suggestions for incorrect words___\033[0m\n");
        for (int i = 0; i < incrt_words; i++)
        {
            printf("%d. ", i + 1);
            for (int j = 0; j <= MAX_SUGGESTIONS; j++)
            {
                if (j == 0)
                {
                    printf("\033[1;31m%s\033[0m -> ", display_suggest[i][0]);
                }
                else
                {
                    printf("\033[1;32m%s\033[0m ", display_suggest[i][j]);
                }
            }
            printf("\n");
        }
    }
    printf("\n");

    unload();

    return 0;
}