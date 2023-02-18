#include<stdio.h>
int main()
{
	int arr[3][3];                     //2D array declaration
	int i,j;
	printf("enter the elements: \n");  //entering elements
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("elements at [%d][%d]: ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	printf("\nprinting the elements of a 2D array: \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",arr[i][j]);
			if(j==2)
			printf("\n");
		}
	}
	return 0;
}