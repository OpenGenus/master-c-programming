#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter a number=");
	scanf("Input: %d",&a);
	if(a<0)
	{
        b=a*(-1);
        printf("|%d| = %d",a,b);
	}
	else
        printf("|%d| = %d",a,a);
	return 0;
}