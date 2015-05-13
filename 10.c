// https://projecteuler.net/problem=10

#include <stdio.h>


int main()
{
	FILE *fp;
	long long sum;

	long num;

	fp = fopen ("primes_100000.txt", "r");

	sum = 0;
	while (fscanf(fp, "%ld", &num) != EOF) {
		if (num >= 2000000) {
			break;
		}
		sum += num;
	}

	printf ("%lld", sum);


	return 0;
}
