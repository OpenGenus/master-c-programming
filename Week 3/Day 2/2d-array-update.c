#include<stdio.h>
int main()
{
	int arr[3][3];                     //2D array declaration
	int i,j;                           //variables for 'for loops'
	int num;                           //number to be updated
	printf("enter the elements: \n");  //entering elements
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("elements at [%d][%d]: ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	printf("\nprinting the elements of an array: \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",arr[i][j]);
			if(j==2)
			printf("\n");
		}
	}
	printf("\nenter the location in a matrix where you want to update value: ");
	scanf("%d %d",&i,&j);   
	printf("\nenter the value to be replaced: ");
	scanf("%d",&num);
	arr[i][j]=num;                      //number assigned to particular position in array
	printf("\narray after updating: \n");
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