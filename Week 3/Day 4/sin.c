// Program to illustrate double sin(double x) function.
#include <stdio.h> // included stdio.h header file to use standard I/O functions.
#include <math.h> // included math.h header file to use its functions.

#define PI 3.14159265 //defined a macro to represent the value of Pi.

int main () {
   double x, ret, val;

   x = 90.0;
   val = PI / 180.0; // Will use this value to convert radians to degree.

   printf("The sine of %lf is %lf radians \n", x, sin(x)); // Here we used the function sin(x) where x was an angle in radians.
   ret = sin(x * val); // Converting radians to degrees first and then computing the sine usings sin(x) where x was in degrees.
   printf("The sine of %lf is %lf degrees \n", x, ret); //In degrees.
   
   return(0);
}