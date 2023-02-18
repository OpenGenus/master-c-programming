#include<stdio.h>
int c;              //global declaration
int main()
{
    int a=5,b=6;     //local declaration
    c=a+b;              //variable c is used here which is globally declared
    printf("%d",c);
    return 0;
}