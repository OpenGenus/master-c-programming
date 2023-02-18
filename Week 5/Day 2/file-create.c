#include <stdio.h>

int main () {
   FILE * fp;

   fp = fopen ("file.txt", "w+");
   fprintf(fp, "This is a sample line %d from OpenGenus", 1);
   
   fclose(fp);
   
   return(0);
}