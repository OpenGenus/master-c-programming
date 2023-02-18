#include"external-variable.h"    //file containing external variable is included here
#include<stdio.h>
extern int a;
int main()
{
    printf("value of external interger is:%d",a);
    return 0;
}