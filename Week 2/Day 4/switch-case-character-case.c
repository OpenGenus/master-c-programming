#include <stdio.h>
int main()
{
    char character;
    printf("Enter a, b or other character\n");
    scanf("%c", &character);

    switch(character)
    {
        case 'a': printf("A");
            break;
        case 'b': printf("B");
            break;
        default: printf("other character");
    }
    return 0;
}