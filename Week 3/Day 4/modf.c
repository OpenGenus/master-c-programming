// Program to illustrate double modf(double x, double *integer) function.
#include <stdio.h> // included stdio.h header file to use standard I/O functions.
#include <math.h> // included math.h header file to use its functions.

int main () {
   float x, fractpart, intpart;

   x = 5.143532;
   fractpart = modf(x, &intpart);

   printf("Integral part = %f\n", intpart);
   printf("Fraction Part = %f\n", fractpart);
   
   return(0);
}