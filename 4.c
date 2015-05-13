// https://projecteuler.net/problem=4
// palindrome
#include <stdio.h>

int check(long p)
{
	int rt = 1;
	char c[6];
	int j;
	int i = 0;
	while (p) {
		c[i] = p % 10;
		p /= 10;
		i++;
	}

	if (i % 2 != 0)
		rt = 0;
	else {
		for (j = 0; j < i / 2; j++) {
			if (c[j] != c[i - j - 1])
				rt = 0;
		}
	}

	return rt;
}

int main()
{
	int a, b;
	long p;
	long pmax;

	pmax = 0;
	a = 999;
	while (a > 100) {
		b = 999;
		while (b > 100) {
			p = a * b;
			if (check(p)) {
				if (pmax < p)
					pmax = p;
			}

			b--;
		}
		a--;
	}

	printf("%ld\n", pmax);


	return 0;
}
