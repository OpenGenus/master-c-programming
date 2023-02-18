#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter a time in 24 hours format=");
	scanf("%d%d",&a,&b);
	if(a<12)
	{
		printf("%d:%dam",a,b);
	}
	else
	{
		c=a-12;
		printf("%d:%dpm",c,b);
	}
	
	return 0;
}