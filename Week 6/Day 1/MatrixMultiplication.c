#include<stdio.h>

int main()
{
	int a[3][2] = {2,3,4,5,3,5};
	int b[2][3] = { 1,2,3,4,5,6 };
	int c[3][3];
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			c[i][j] = 0;
			for (int k = 0; k < 2; k++)
				c[i][j] += a[i][k] * b[k][j];
		}
	}

	printf("The result of multiplying matrix 1 and matrix 2 is:\n");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d\t", c[i][j]);	
		}
		printf("\n");
	}
	return 0;
}

/* 

OUTPUT 
The result of multiplying matrix 1 and matrix 2 is:
14	19	24	
24	33	42	
23	31	39	

*/

//TC - O(n^3)
