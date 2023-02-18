#include <stdio.h> 
enum day {sunday, monday, tuesday, wednesday, thursday, friday, saturday}; 
  
int main() 
{ 
    enum day d = thursday; 
    printf("The day number stored in d is : %d", d); 
    return 0; 
}