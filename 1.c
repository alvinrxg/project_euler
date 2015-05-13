#include <stdio.h>

int main()
{
	long i, sum;

	i = 1;
	sum = 0;
	while(i < 1000) {
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
		i++;
	}

	printf("%ld\n", sum);
	return 0;
}
