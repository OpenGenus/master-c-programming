#include<stdio.h> 
int *fun() 
{ 
    static int x = 5; 
    return &x; 
} 
int main() 
{ 
    int *p = fun(); 
    fflush(stdin); 
    printf("%d",*p); 
}