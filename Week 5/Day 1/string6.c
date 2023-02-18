#include <stdio.h>
int main()
{
    char str[30];
    printf("Enter your full name : ");
    gets(str);
    printf("Hello ");
    fputs(str, stdout);
    printf("!");
    return 0;
}