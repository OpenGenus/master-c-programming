#include <stdio.h>
#include <stdlib.h>
int main () {
   ldiv_t output;
   output = ldiv(100000L, 30000L);
   printf("Quotient = %ld\n", output.quot);
   printf("Remainder = %ld\n", output.rem);
   return(0);
}