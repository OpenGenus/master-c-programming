#include <stdio.h>

int main () {
   FILE * fp;

   fp = fopen ("file-content.txt", "a+");
   fprintf(fp, "This is a sample line from OpenGenus");
   
   fclose(fp);
   
   return(0);
}