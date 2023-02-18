#include<stdio.h> 
  
enum week{Mon, Tue, Wed, Thur, Fri, Sat, Sun}; 
int main() 
{ 
    enum week day; //calling enum
    day = Wed; 
    printf(”%d” , day); 
    return 0; 
}