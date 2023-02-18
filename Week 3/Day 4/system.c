#include <stdio.h>
#include <string.h>

int main () {
   char command[50];
   strcpy( command, "dir" );
   system(command);
   return(0);
}