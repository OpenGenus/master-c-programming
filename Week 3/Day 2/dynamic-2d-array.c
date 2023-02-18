#include<stdio.h>       //malloc library
#include<malloc.h>      //command line argument
int main(int argc, char* argv[])
{
  int row,column;      //variables for rows and columns
  int ***arr;
  int i,j;             //variables for 'for loop'
  printf("enter the number of rows and column: ");
  scanf("%d %d",&row,&column);
  arr=(int **)malloc(sizeof(int **)*row);
  for(i=0;i<row;i++)
  {
    arr[i]=(int *)malloc(sizeof(int)*column);
  }
  for(i=0;i<row;i++)
  {
    for(j=0;j<column;j++)
	{
    printf("element at: [%d][%d] :",i,j);
    scanf("%d",&arr[i][j]);
    }
  }
  printf ("Printing 2D Array:\n");
  for(i=0;i<row;i++)
  {
    for(j=0;j<column;j++)
	{
        printf("%.2d ",arr[i][j]);
    }
    printf("\n");
  }
  return 0;
}