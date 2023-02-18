#include<stdio.h>
#include<stdlib.h>

int main(int argc,char** argv)
{
	int input=atoi(argv[1]);
	int answer= input % 100;
	printf("The last two digits of the number are %d",answer);
	
	return 1;
}