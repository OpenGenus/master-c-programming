#include <stdio.h>
#include "opengenus.h"
int main() 
{
    // this is our comment
	#ifndef opengenus
	printf("opengenus 1\n");
	#else
	printf("opengenus 2\n");
	#endif
	printf("this is a C code\n");
	return 0;
}