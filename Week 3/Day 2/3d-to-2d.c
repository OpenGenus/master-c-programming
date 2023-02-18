#include<stdio.h>
int main()
{
	int i,j,k;               //variables for nested for loop
	int arr[2][3][3];        //declaration of 3D array
	printf("enter the elements: \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			for(k=0;k<3;k++)
			{
				printf("element at [%d][%d][%d]: ",i,j,k);
				scanf("%d",&arr[i][j][k]);
				//arr[i][j][k]=++ctr;
			}
		}
	}
	printf("\nprinting 3D array\n");
	for(i=0;i<2;i++)                        //printing 3d array
	{   
		for(j=0;j<3;j++)
		{
			for(k=0;k<3;k++)
			{
				printf("%d ",arr[i][j][k]);	
			}
			printf("\n");
		}
		printf("\n");
	}
	int a[3][3];                    //2D array declaration
	int b[3][3];
	printf("\ncopying values in new 2D array: \n");
	for(i=0;i<2;i++)
	{   
		for(j=0;j<3;j++)                 
		{
			for(k=0;k<3;k++)
			{
				if(i==0)
				{
					a[j][k]=arr[i][j][k];    //copying values in new 2d array
				}
				else
				{
					b[j][k]=arr[i][j][k];
				}
			}
		}
	}
	printf("\nprinting elements in first 2D array: \n");
	for(i=0;i<3;i++)
	{   
		for(j=0;j<3;j++)                 //printing first 2d array
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	printf("\nprinting elements in second 2D array: ");
	for(i=0;i<3;i++)
	{   
		for(j=0;j<3;j++)                //printing 2nd 2d array
		{
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	return 0;				
}