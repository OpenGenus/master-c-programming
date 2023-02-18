#include<stdio.h>
typedef int* IntPtr;

void main( )
{
    IntPtr x;
    int x_addres = 123;
    x = &x_addres;    
    printf("%p",x);                    // print's 0x7ffdbefa34cc 
}