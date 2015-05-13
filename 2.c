#include <stdio.h>

int main()
{
	long a, b, c, sum;

	a = 1;
	b = 2;
	c = 3;
	sum = 2;

	while(c < 4000000) {
		if (c % 2 == 0)
			sum += c;
		a = b;
		b = c;
		c = a + b;
	}

	printf("%ld\n", sum);

	return 0;
}
