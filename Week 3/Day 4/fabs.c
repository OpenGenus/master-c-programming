// Program to illustrate double fabs(double x) function.
#include <stdio.h> // included stdio.h header file to use standard I/O functions.
#include <math.h> // included math.h header file to use its functions.

int main () {
   float a, b;
   a = 1234.1232;
   b = -344.32;
  
   printf("The absolute value of %f is %f\n", a, fabs(a));
   printf("The absolute value of %f is %f\n", b, fabs(b));
   
   return(0);
}