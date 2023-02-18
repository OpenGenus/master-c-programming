#include<stdio.h>
int main(int argc, char** argv)
{
	char name[100];
	int count=0,len=0,c=1,d=0;
	printf("Enter the name");
	scanf("%[^\n]s",name);
	int i;
	for(i=0;i<100;i++)
	{
		if(name[i]!='\n')
		{
			len++;
		}
		if(name[i]==' ')
		{
			count++;
		}
	}
	for(i=0;i<len;i++)
	{
		printf("%c.",name[0]);
		break;
	}
	for(i=0;i<len;i++)
	{	
		if(name[i]==' ')
		{
			if(c<count)
			{
				printf("%c.",name[i+1]);
				c++;
			}
			
		}
	}
	for(i=0;i<len;i++)
	{	
		if(name[i]==' ')
		{
			d++;
		}
		if(d==count)
	
		{
			printf("%c",name[i+1]);
		}
	}
	
	return 0;
}