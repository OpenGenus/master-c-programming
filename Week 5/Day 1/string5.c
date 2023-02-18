#include <stdio.h>
int main()
{
    char str[30];
    printf("Enter your full name : ");
    gets(str);
    printf("Hello ");
    puts(str);
    printf("!");
    return 0;
}