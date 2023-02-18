#include<stdio.h>
int main()
{
    int a,c;    //variables are declared but not initialized
    int b=3;   //variable is declared as well as defined
    a=2;        //value assigned to variable a
    c=a+b;
    printf("%d",c);
    return 0;
}