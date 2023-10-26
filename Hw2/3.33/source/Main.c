#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int length, breadth;

	// Input length and breadth of the rectangle
	printf("Enter length of the rectangle: ");
	scanf("%d", &length);

	printf("Enter breadth of the rectangle: ");
	scanf("%d", &breadth);

	// Print the hollow rectangle
	for (int i = 1; i <= length; ++i) {
		for (int j = 1; j <= breadth; ++j) {
			// Check if it's a boundary position
			if (i == 1 || i == length || j == 1 || j == breadth) {
				printf("+");
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}

	system("pause");
	return 0;
}






