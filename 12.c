// https://projecteuler.net/problem=12
// execute time 1.65s...........
#include <stdio.h>
#include <limits.h>

int check(long n)
{
	int rt;
	long i;

	rt = 0;

	for (i = 1; i < sqrt(n); i++) {
		if (n % i == 0)
			rt += 2;
	}

	return rt;
}

int main()
{
	long i, j;
	int a;
	long n;

	n = 0;
	for (i = 1; i < LONG_MAX;i++) {
		n += i;
		a = check(n);
		if (a > 500) {
			printf ("%ld\n", n);
			break;
		}
	}

	return 0;
}
