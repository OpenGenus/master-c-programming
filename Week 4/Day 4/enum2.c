#include <stdio.h> 
enum State {Work = 1, Fail = 0, Freez = 0}; 
  
int main() 
{ 
   printf(ā%d, %d, %dā, Work, Fail, Freez); 
   return 0; 
}