#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// Print the top half of the diamond
	for (int i = 1; i <=5; i++) {
		// Print leading spaces
		for (int j = 1; j <= 5- i; j++) {
			printf(" ");
		}
		// Print asterisks
		for (int k = 1; k <= 2 * i - 1; k++) {
			printf("*");
		}
		printf("\n");
	}

	// Print the bottom half of the diamond
	for (int i = 4; i >= 1; i--) {
		// Print leading spaces
		for (int j = 1; j <= 5 - i; j++) {
			printf(" ");
		}
		// Print asterisks
		for (int k = 1; k <= 2 * i - 1; k++) {
			printf("*");
		}
		printf("\n");
	}

	system("pause");
	return 0;
}



