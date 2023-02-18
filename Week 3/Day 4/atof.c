#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main () {
   float value;
   char str[20];   
   strcpy(str, "12345678");
   value = atof(str);
   printf("String = %s, Float value = %f\n", str, value);

   strcpy(str, "opengenus.org");
   value = atof(str);
   printf("String = %s, Float value = %f\n", str, value);

   return(0);
}