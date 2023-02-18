#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main () {
   int value;
   char strs[20];   
   strcpy(strs, "12345678");
   value = atoi(strs);
   printf("String = %s, Int value = %d\n", strs, value);
   strcpy(str, "opengenus.org");
   value = atoi(strs);
   printf("String = %s, Int value = %d\n", strs, value);
   return(0);
}