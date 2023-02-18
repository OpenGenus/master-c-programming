#include<stdio.h>
#include<string.h>
int main()
{
    char instr1[100],instr2[100],instr3[100],instr4[100];
    
    printf("Enter the string of four words\n");
    scanf("%s",instr1);
    scanf("%s",instr2);
    scanf("%s",instr3);
    scanf("%s",instr4);
    printf("String is : \n");
    
    printf("%s %s %s %s" ,instr1,instr2,instr3,instr4 );
    
    return 0;
}