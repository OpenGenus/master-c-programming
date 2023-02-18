#include <stdio.h>
#include <stdlib.h>
int main () {
   char str[30] = "2020200 This is the text";
   char *ptr;
   long ret;
   ret = strtol(str, &ptr, 10);
   printf("The number (long integer) is %ld\n", ret);
   printf("String part is |%s|", ptr);
   return(0);
}