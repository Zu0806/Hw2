#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	double principal = 5000.0;
	int years = 15;

	printf("%-10s%-20s%-20s\n", "Rate", "Amount on Deposit", "Total Interest");

	for (double rate = 0.10; rate <= 0.12; rate += 0.005) {
		double amount = principal * pow(1.0 + rate, years);
		double interest = amount - principal;

		printf("%-10.2f$%-20.2f$%-20.2f\n", rate * 100, amount, interest);
	}


	return 0;
}