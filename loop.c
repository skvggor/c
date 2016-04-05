#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float number;
	int factor = 5;
	char option = 'Y';

	do {
		printf("Type a n: ");
		scanf("%f", & number);

		printf("%.0f x %d: %.0f\n", number, factor, number * factor);

		printf("Continue? (y/n) ");
		getchar();
		scanf("%c", & option);
	} while (option == 'Y' || option == 'y');

	return 0;
}
