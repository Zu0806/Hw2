#include <stdio.h>

int main() {
	// �ŧi�ܼ�
	double g, e;

	while (1)
	{
		// ��J�P���B
		printf("Enter sales in dollars (-1 to end): ");
		scanf("%lf", &g);
		if (g == -1)
			break;

		// �p�⦬�J
		e = 200 + 0.09 * g;

		// ��ܵ��G
		printf("Salary is: $%.2f\n\n", e);
	}

	system("pause");
	return 0;
}






