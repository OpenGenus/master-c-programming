#include<stdio.h>
int main()
{
    fun();
    fun();
    fun();
    return 0;
}
void fun()
{
    int a=5;         //local variable
    static int b=5;  //static variable
    a=a+1;
    b=b+1;
    printf("a=%d\tb=%d\n",a,b);
}