#ifndef DICTIONARY_H
#define DICTIONARY_H
#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

#define MAX_LENGTH 45
#define N 26

typedef struct node
{
    bool isWord;
    struct node *children[N];
} node;

node *root;
int _size = 0;

void unloadNode(node *top)
{
    if (top == NULL)
        return;

    for (int i = 0; i < N; i++)
    {
        if (top->children[i] != NULL)
        {
            unloadNode(top->children[i]);
        }
    }
    free(top);
}

void unload()
{
    unloadNode(root);
}

bool loadDictionary()
{
    root = malloc(sizeof(node));
    if (root == NULL)
    {
        return false;
    }
    root->isWord = false;
    for (int i = 0; i < N; i++)
    {
        root->children[i] = NULL;
    }

    FILE *file = fopen("dictionary.txt", "r");
    if (file == NULL)
    {
        unload();
        return false;
    }

    int idx;
    char word[46 + 1];

    while (fscanf(file, "%s", word) != EOF)
    {
        node *child = root;

        for (int i = 0, l = strlen(word); i < l; i++)
        {
            idx = (int)word[i] - (int)'a';

            if (child->children[idx] == NULL)
            {
                child->children[idx] = malloc(sizeof(node));
                if (child->children[idx] == NULL)
                {
                    return false;
                }
                child->children[idx]->isWord = false;
                for (int j = 0; j < N; j++)
                {
                    child->children[idx]->children[j] = NULL;
                }
            }
            child = child->children[idx];
        }
        child->isWord = true;
        _size++;
    }
    fclose(file);
    return true;
}

int size(void)
{
    return _size;
}

bool check(const char *word)
{
    int idx;
    node *child = root;

    for (int i = 0, l = strlen(word); i < l; i++)
    {
        idx = (int)tolower(word[i]) - (int)'a';

        child = child->children[idx];
        if (child == NULL)
        {
            return false;
        }
    }
    return child->isWord;
}

#endif