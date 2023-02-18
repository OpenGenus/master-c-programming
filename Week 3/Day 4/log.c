// Program to illustrate double log(double x) function.
#include <stdio.h> // included stdio.h header file to use standard I/O functions.
#include <math.h> // included math.h header file to use its functions.

int main () {
   double x, ret;
   x = 5.2;

   ret = log(x);
   printf("log(%f) = %f\n", x, ret);
   
   return 0;
}