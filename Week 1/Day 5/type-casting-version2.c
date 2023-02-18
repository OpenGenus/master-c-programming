// C++ program to demonstrate 
// explicit type casting 
#include <iostream> 
using namespace std; 
  
int main() 
{ 
    double x = 100.6; 
    // Explicit conversion from double to int 
    int sum = int(x) + 1; 
    cout<< sum; 
    return 0; 
}