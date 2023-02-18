#include <stdio.h>
#include <stdlib.h>
int main () {
   FILE *fp;
   printf("Going to open file1.txt\n");
   fp = fopen( "file1.txt","r" );
   if(fp == NULL) {
      printf("Going to abort the program\n");
      abort();
   }
   printf("Going to close nofile.txt\n");
   fclose(fp);
   return(0);
}