#include <stdio.h>
#include<stdlib.h>

int main(void) 
{
	int a; //a:accountNumber
	double b, totalCharges, totalCredits, c;//b:beginningbalance c:creditlimit

	while (1)
	{
		// Input customer information
		printf("Enter account number (-1 to end): ");
		scanf("%d", &a);
		if (a == -1)
			break;

		printf("Enter beginning balance: ");
		scanf("%lf", &b);

		printf("Enter total charges: ");
		scanf("%lf", &totalCharges);

		printf("Enter total credits: ");
		scanf("%lf", &totalCredits);

		printf("Enter credit limit: ");
		scanf("%lf", &c);

		// Calculate new balance
		double n = b + totalCharges - totalCredits;

		// Check if credit limit exceeded
		if (n > c) {
			printf("Account:\t%d\n", a);
			printf("Credit Limit:\t%.2f\n", c);
			printf("Balance:\t%.2f\n", n);
			printf("Credit limit exceeded.\n\n");
		}
		else {
			printf("Account:\t%d\n", a);
			printf("Credit Limit:\t%.2f\n", c);
			printf("Balance:\t%.2f\n", n);
			printf("Credit limit not exceeded.\n\n");
		}
	}

	system("pause");
	return 0;
}