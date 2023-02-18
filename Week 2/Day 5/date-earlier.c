#include<stdio.h>
int main()
{
	int a,b,c,d,e,f;
	printf("Enter the first date=");
	scanf("%d%d%d",&a,&b,&c);
	printf("Enter the second date=");
	scanf("%d%d%d",&d,&e,&f);
	if(c>f)
	{
		printf("%d/%d/%d is earlier",d,e,f);
	}
	else if(c<f)
	{
		printf("%d/%d/%d is earlier",a,b,c);
	}
	else if(b<e)
	{
		printf("%d/%d/%d is earlier",a,b,c);
	}
	else if(b>e)
	{
		printf("%d/%d/%d is earlier",d,e,f);
	}
	else if(a<d)
	{
		printf("%d/%d/%d is earlier",a,b,c);
	}
	else
	{
		printf("%d/%d/%d is earlier",d,e,f);
	}
	return 0;
}