// Program to illustrate double acos(double x) function.
#include <stdio.h> // included stdio.h header file to use standard I/O functions.
#include <math.h> // included math.h header file to use its functions.

#define PI 3.14159265 //defined a macro to represent the value of Pi.

int main () {
   double x, ret, val;

   x = 0.7;
   val = 180.0 / PI; // Will use this value to convert radians to degree.

   printf("The arc cosine of %f is %f radians \n", x, acos(x)); // Here we used the function acos(x) and returned the value in radians.
   ret = acos(x) * val; // Converting radians to degrees.
   printf("The arc cosine of %f is %f degrees \n", x, ret); //In degrees.
   
   return(0);
}