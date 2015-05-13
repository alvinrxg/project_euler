// https://projecteuler.net/problem=3
// load the prime file to check the most big one......

#include <stdio.h>

int main ()
{
	long long n = 600851475143;

	int prime;	// prime from stdin

	while (scanf("%d", &prime) != EOF) {
		if (n % prime == 0) {
			printf("%d\n", prime);
		}
	}

	return 0;
}
