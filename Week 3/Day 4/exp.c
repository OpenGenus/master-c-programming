// Program to illustrate double exp(double x) function.
#include <stdio.h> // included stdio.h header file to use standard I/O functions.
#include <math.h> // included math.h header file to use its functions.

int main () {
   float x = 0;
   float y = 1;
   float z = 2;
  
   printf("The exponential value of %f is %f\n", x, exp(x));
   printf("The exponential value of %f is %f\n", y, exp(y));
   printf("The exponential value of %f is %f\n", z, exp(z));
   
   return(0);
}