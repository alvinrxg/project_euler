#include <stdio.h>

int numbers[] = {
	4,	// Zero
	3,	// one
	3,	// two
	5,	// three
	4,	// four
	4,	// five
	3,	// six
	5,	// seven
	5,	// eight
	4,	// nine
	3, 	// ten
	6,	// eleven
	6,	// twelve
	8,	// thirteen
	8,	// fourteen
	7,	// fifteen
	7,	// sixteen
	9,	// seventeen
	8,	// eighteen
	8	// nineteen
};
int numbers10[] = {
	4,	// zero
	3,	// ten
	6,	// twenty
	6,	// thirty
	5,	// fourty
	5,	// fifty
	5,	// sixty
	7,	// seventy
	6,	// eighty
	6	// ninety
};
int hundred = 7;
int and = 3;
int thousand = 8;


int sum_of_one_digit(int n)
{
	return numbers[n];
}

// 20 ~ 99
int sum_of_two_digits(int n)
{
	int sum;
	int first_digit, last_digit;

	sum = 0;
	if (n < 10) {
		sum += sum_of_one_digit(n);
	}
	else {
		last_digit = n % 10;
		first_digit = n / 10;

		if (first_digit == 1) {
			sum += numbers[n];
		}
		else {
			sum += numbers10[first_digit];
			if (last_digit != 0)
				sum +=  numbers[last_digit];
		}
	}

	return sum;
}


int sum_of_three_digits(int n)
{
	int sum;
	int first_digit, mid_digit, last_digit, last_two_digits;

	sum = 0;
	first_digit = n / 100;
	last_digit = n % 10;
	mid_digit = n / 10 % 10;
	last_two_digits = n % 100;


	if (n < 100) {
		sum += sum_of_two_digits(n);
	}
	else {
		sum += numbers[first_digit] + hundred;
		if (last_two_digits > 0) {
			sum += and + sum_of_two_digits(last_two_digits);
		}
	}


	return sum;
}

int calc(int start, int end)
{
	int i;
	int sum;
	i = start;
	sum = 0;
	while (i <= end) {
		if (i == 1000) {
			sum += 3 + 8;
		}
		else if (i < 1000){
			sum += sum_of_three_digits(i);
		}
		else {
			printf("Number too big. Range [1 .. 1000]\n");
			return 1;
		}

		i++;
	}

	printf("Sum: %d\n", sum);
}

void printoutusage(char *prog)
{
	printf("Counter number letters.\
Usage:\n\
	%s [start end]\n\
", prog);
}

int main(int argc, char *argv[])
{
	if (argc == 3) {
		if (atoi(argv[1]) <= atoi(argv[2])) {
			calc(atoi(argv[1]), atoi(argv[2]));
		}
		else {
			printoutusage(argv[0]);
		}
	}
	else {
			printoutusage(argv[0]);
	}


	return 0;
}
