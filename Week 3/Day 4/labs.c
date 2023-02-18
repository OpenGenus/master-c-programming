#include <stdio.h>
#include <stdlib.h>
int main () {
   long int a,b;
   a = labs(65987L);
   printf("Value of a = %ld\n", a);
   b = labs(-1005090L);
   printf("Value of b = %ld\n", b);
   return(0);
}