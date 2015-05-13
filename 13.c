// https://projecteuler.net/problem=13
#include <stdio.h>

int main()
{
	char m[100][51];
	int i, j, k;
	int n[60] = {0};

	i = 0;
	while (scanf("%s", m[i]) && i < 100) {

		j = 0;
		while (j < 50) {
			if (m[i][j] >= '0')
				m[i][j] -= '0';
			j++;
		}
		i++;
	}

 	i = 49;
	j = 0;
	while (i >= 0) {
		// n[j] = ...;
		k = 0;
		n[j] = 0;
		while (k < 100) {
			n[j] += m[k][i];
			k++;
		}
		i--;
		j++;
	}

	i = 0;
	while (i < 60) {
		k = n[i] / 10;
		n[i] %= 10;
		n[i+1] += k;
		i++;
	}

	i = 59;
	k = 0;
	while (i >= 0) {
		if (k == 0 && n[i] == 0) {

		}
		else {
			k = 1;

			printf("%d", n[i]);
		}
		i--;
	}
	return 0;
}
