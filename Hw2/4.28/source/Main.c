#include <stdio.h>

int main() {
	int payCode;

	while (1) {
		// Prompt for pay code
		printf("Enter employee's pay code (1 for Manager, 2 for Hourly Worker, 3 for Commission Worker, 4 for Pieceworker, -1 to end): ");
		scanf("%d", &payCode);

		if (payCode == -1) {
			// Exit the program if -1 is entered
			break;
		}

		double weeklyPay = 0.0;

		switch (payCode) {
		case 1: // Manager
			printf("Enter manager's fixed weekly salary: $");
			scanf("%lf", &weeklyPay);
			break;

		case 2: // Hourly Worker
		{
			double hourlyWage, hoursWorked;
			printf("Enter hourly worker's hourly wage: $");
			scanf("%lf", &hourlyWage);

			printf("Enter hours worked by hourly worker: ");
			scanf("%lf", &hoursWorked);

			if (hoursWorked > 40) {
				// Calculate overtime pay (1.5 times hourly wage for hours beyond 40)
				weeklyPay = 40 * hourlyWage + (hoursWorked - 40) * 1.5 * hourlyWage;
			}
			else {
				weeklyPay = hoursWorked * hourlyWage;
			}
		}
		break;

		case 3: // Commission Worker
		{
			double sales;
			printf("Enter commission worker's gross weekly sales: $");
			scanf("%lf", &sales);
			weeklyPay = 250 + 0.057 * sales;
		}
		break;

		case 4: // Pieceworker
		{
			double piecesProduced, wagePerPiece;
			printf("Enter pieceworker's number of pieces produced: ");
			scanf("%lf", &piecesProduced);

			printf("Enter pieceworker's wage per piece: $");
			scanf("%lf", &wagePerPiece);

			weeklyPay = piecesProduced * wagePerPiece;
		}
		break;

		default:
			printf("Invalid pay code. Please enter a valid pay code.\n");
			continue; // Continue to the next iteration of the loop
		}

		printf("Weekly pay: $%.2f\n", weeklyPay);
	}

	system("pause");
	return 0;
}