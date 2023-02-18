#include<stdio.h>
typedef struct vehicle
{
    char name[50];
    char  model[50];
}car;
 
void main( )
{
    car c1;
    scanf("%s", c1.name);               //BMW
    scanf("%s", c1.model);              // S7
    printf("\nCar name: %s\n",c1.name);
    printf("\nCar Model: %s\n",c1.model);
    
}