#include <stdio.h>
#include <stdlib.h>
int main () {
   char str[30] = "2030300 This is the text part";
   char *ptr;
   unsigned long ret;
   ret = strtoul(str, &ptr, 10);
   printf("The number(unsigned long integer) is %lu\n", ret);
   printf("String part is |%s|", ptr);
   return(0);
}