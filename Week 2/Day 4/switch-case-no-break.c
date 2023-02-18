#include <stdio.h>
int main()
{
    int weeknumber;

    //Reading week no from user
    printf("Enter week number(1-7): ");
    scanf("%d", &weeknumber);

    switch(weeknumber)
    {
        case 1: printf("Monday");
           
        case 2: printf("Tuesday");
          
        case 3: printf("Wednesday");
           
        case 4: printf("Thursday");
           
        case 5: printf("Friday");
            
        case 6: printf("Saturday");
       
        case 7: printf("Sunday");
            
        default: printf("Invalid input! Please enter week no. between 1-7.");
    }
    return 0;
}