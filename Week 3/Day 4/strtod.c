#include <stdio.h>
#include <stdlib.h>
int main () { 
   char str[30] = "21.32322 This is the text";
   char *ptr;
   double ret;
   ret = strtod(str, &ptr);
   printf("The number(double) is %lf\n", ret);
   printf("String part is |%s|", ptr);
   return(0);
}