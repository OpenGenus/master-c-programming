// Program to illustrate double fmod(double x, double y) function.
#include <stdio.h> // included stdio.h header file to use standard I/O functions.
#include <math.h> // included math.h header file to use its functions.

int main () {
   float a, b, c;
   a = 9.2;
   b = 3.7;
   c = 0;
   printf("Remainder of %f / %f is %f\n", a, c, fmod(a,c));
   printf("Remainder of %f / %f is %f\n", a, b, fmod(a,b));
   
   return(0);
}