#include<stdio.h>
int main()
{
    int s[100];
    printf("Enter multiple line strings\n");
    scanf("%[^\r]s",s);
    printf("Entered String is\n");
    printf("%s\n",s);
    return 0;
}