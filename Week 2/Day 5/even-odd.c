#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter a number=");
    scanf("%d",&a);
    b=a%2;
    if(b==1)
    {
        printf("%d is odd",a);
    }
    else
    {
        printf("%d is even",a);
    }
    return 0;
}