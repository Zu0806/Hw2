#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int d;
	double i, p, r;

	while (1)
	{
		printf("Enter loan principal (-1 to end):");
		scanf("%lf", &p);
		if (p == -1)
			break;
		printf("Enter interest rate:");
		scanf("%lf", &r);
		printf("Enter term of the loan in days:");
		scanf("%d", &d);

		i = p * r*d / 365;
		printf("The interest charge is $%.2lf\n\n",i);
	}
	system("pause");
	return 0;
}