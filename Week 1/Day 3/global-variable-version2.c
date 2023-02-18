#include<stdio.h>
int b=20; //globally variable b is initialized as 20
int main()
{
    int a=10,b=10,c;  //variable b is re-initialized as 10
    c=a+b;
    printf("%d",c);
    return 0;
}