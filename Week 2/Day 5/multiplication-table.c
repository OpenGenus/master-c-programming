#include<stdio.h>
#include<stdlib.h>
int multable(int a)
{
    int sum=0;
    for(int i=1;i<=10;i++)
    {
        sum=sum+a;
        printf("%d x %d= %d\n",a,i,sum);
    }
}

int main(int argc,char** argv)
{
	int inputa=atoi(argv[1]);
	int inputb=atoi(argv[2]);
	multable(a);
	multable(b);
	return 1;
}