#include <stdio.h>
#include <stdlib.h>

int sieve_of_eratosthenes(int **primes, const int max) {
	// Allocate memory
	int *isPrime = (int *)malloc(sizeof(int) * (max + 1));
	int i;
	// Assume all numbers to be prime initially
	for(i = 0; i <= max; ++i)
		isPrime[i] = 1;
	// 0 and 1 are not prime
	isPrime[0] = 0;
	isPrime[1] = 0;
	// Maintain a count of primes as we encounter them
	int count = 0;
	// We need a count of all primes as we move
	// This means we cannot iterate to root(max)
	for(i = 2; i <= max; ++i)
	{
		if(isPrime[i] == 1)
		{
			++count;
			int j;
			// Set all multiples of i as not prime
			for(j = 2 * i; j <= max; j += i)
				isPrime[j] = 0;
		}
	}
	*primes = (int *)malloc(sizeof(int) * count);
	int j = 0;
	for(i = 0; i <= max; ++i)
	{
		if(isPrime[i] == 1)
		{
			(*primes)[j++] = i;
		}
	}
	return count;
}

int findTwinPrimes(int **primes, int **twin_primes, const int size) {
    int count = 0;
    *twin_primes = (int *)malloc(sizeof(int) * size);
    
    for(int i = 0; i < size-1; ++i)
	{
	    if((*primes)[i+1] - (*primes)[i] == 2) {
	        (*twin_primes)[count++] = (*primes)[i];
	        (*twin_primes)[count++] = (*primes)[i+1];
	    }
	}
	count = (int)(count/2);
	return (int)(count);
}


int main() {
	int n = 10000, i;
	int *primes = NULL;
	int *twin_primes = NULL;
	// Find primes up to n
	int size = sieve_of_eratosthenes(&primes, n);
	
	int twin_prime_size = findTwinPrimes(&primes, &twin_primes, size);
	
	printf("Twin Primes up to %d are:\n", n);
	for(i = 0; i < twin_prime_size*2;)
	{
		printf("%d, %d\n", twin_primes[i], twin_primes[i+1]);
		i = i + 2;
	}
	return 0;
}