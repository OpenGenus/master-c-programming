#include <stdio.h>
// C program to illustrate nested-if statement 
int main() 
{ 
    int i = 10; 

    if (i == 10) 
    { 
        // First if statement 
        if (i < 15) 
            printf("i is smaller than 15"); 
            // Nested - if statement 
            // Will only be executed if statement above 
            // it is true 
        if (i < 12) 
            printf("i is smaller than 12 too"); 
        else
            printf("i is greater than 15"); 
    } 

    return 0; 
}