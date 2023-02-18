#include<stdio.h>
int main()
{
    float a,c;
    int b,d;
    printf("Enter a real number=");
    scanf("%f",&a);
    b=a;
    printf("%d\n",b);
    c=a-b;
    c*=100;
    d=c;
    printf("%d",d);
    return 0;
}