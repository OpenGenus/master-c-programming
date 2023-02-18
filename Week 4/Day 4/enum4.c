#include <stdio.h> 
enum day {sunday = 1, monday, tuesday = 5,wednesday, thursday = 10, friday, saturday}; 
  
int main() 
{ 
    printf("%d, %d, %d, %d, %d, %d, %d", sunday, monday, tuesday, wednesday, thursday, friday, saturday); 
    return 0; 
}