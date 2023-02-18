#include <stdio.h> 
int main() 
{ 
    int x = 4; 
    float y = 5.5; 
    void *ptr; 
    ptr = &x; 
    printf("Integer variable is = %d", *( (int*) ptr) ); 
    ptr = &y;  
    printf("\nFloat variable is= %f", *( (float*) ptr) ); 
    return 0; 
}