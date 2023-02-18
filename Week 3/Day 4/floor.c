// Program to illustrate double floor(double x) function.


#include <stdio.h> // included stdio.h header file to use standard I/O functions.
#include <math.h> // included math.h header file to use its functions.

int main () {
   float val1, val2, val3, val4;

   val1 = -1.5;
   val2 = 8.7;
   val3 = 3.0;

   printf ("value1 = %.1lf\n", floor(val1));
   printf ("value2 = %.1lf\n", floor(val2));
   printf ("value3 = %.1lf\n", floor(val3));
   
   return 0;
}