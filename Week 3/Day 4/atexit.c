#include <stdio.h>
#include <stdlib.h>
void fcn () {
   printf("This is fcn...\n");
}
int main () {
   /* register the termination function */
   atexit(fcn);
   printf("Starting  main program...\n");
   printf("Exiting main program...\n");
   return(0);
}