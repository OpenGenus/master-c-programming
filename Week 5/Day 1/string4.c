#include <stdio.h>
int main()
{
    char str[30];
    printf("Enter your full name : ");
    fgets(str,30,stdin);
    printf("Hello %s!", str);
    return 0;
}