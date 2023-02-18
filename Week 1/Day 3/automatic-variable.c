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
    auto int a=5;  //auto int or simply int
    a=a+1;
    printf("a=%d\n",a);
}