// https://projecteuler.net/problem=5
// execute time with 2.4GHz cpu takes 3.28s......

#include <stdio.h>

int main()
{
	long n;
	int i;

	n = 1;
	while (n) {
		for (i = 1; i < 21; i++) {
			if (n % i != 0)
				break;
		}

		if (i >= 21) {
			printf("%ld\n", n);
			break;
		}

		n++;
	}

	return 0;
}
