#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
	printf("Pythagorean Triples (side1, side2, hypotenuse) with sides <= 500:\n");

	for (int side1 = 1; side1 <= 500; ++side1) {
		for (int side2 = 1; side2 <= 500; ++side2) {
			for (int hypotenuse = 1; hypotenuse <= 500; ++hypotenuse) {
				if (side1 * side1 + side2 * side2 == hypotenuse * hypotenuse) {
					printf("(%d, %d, %d)\n", side1, side2, hypotenuse);
				}
			}
		}
	}

	return 0;
}




