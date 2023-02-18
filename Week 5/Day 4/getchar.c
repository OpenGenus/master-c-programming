#include<stdio.h>
#include<string.h>
main()
{
    char instr[100] , ch;
    int c = 0;
    printf("Enter the line \n");
    do
    {
         ch = getchar();
         instr[c]=ch;
         c++;
    }while(ch != '\n');

    c=c-1;
    instr[c]='\0';
    printf("%s \n", instr);
}