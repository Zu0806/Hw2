#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
	// Pattern 1
	printf("(A)\n");
	for (int i = 1; i <=10; ++i) {
		for (int j = 1; j <= i; ++j) {
			printf("* ");
		}
		printf("\n");
	}

	// Pattern 2
	printf("\n(B)\n");
	for (int i = 10; i >= 1; --i) {
		for (int j = 1; j <= i; ++j) {
			printf("* ");
		}
		printf("\n");
	}

	// Pattern 3
	printf("\n(C)\n");
	for (int i = 1; i <= 10; ++i) {
		for (int k = 10; k > i; --k) {
			printf("  ");
		}
		for (int j = 1; j <= i; ++j) {
			printf("* ");
		}
		printf("\n");
	}

	// Pattern 4
	printf("\n(D)\n");
	for (int i = 10; i >= 1; --i) {
		for (int k = 10; k > i; --k) {
			printf("  ");
		}
		for (int j = 1; j <= i; ++j) {
			printf("* ");
		}
		printf("\n");
	}

	return 0;
}






