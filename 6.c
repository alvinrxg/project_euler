// https://projecteuler.net/problem=6

#include <stdio.h>

int main()
{
	int a, b;
	long long sum;
	sum = 0;

	for (a = 1; a <= 100; a++) {
		for (b = 1; b <= 100; b++) {
			if (a != b) {
				sum += a*b;
			}
		}
	}

	printf("%lld\n", sum);


	return 0;
}
