#include <time.h>
#include <stdlib.h>
#include <stdio.h>
int main()
{
	srand(time(NULL));   // Initialization, should only be called once.
	//Please refer to the next topic to understand the above function.
	int r = rand();      // Returns a pseudo-random integer between 0 and RAND_MAX.
	printf("The random number is: %d", r);
}