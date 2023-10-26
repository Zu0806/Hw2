#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
	int hours;
	double hourlyrate, salary;

	while(1)
	{
		printf("Enter # of hours worked (-1 to end): ");
		scanf("%d", &hours);
		if (hours == -1)
			break;
		printf("Enter hourly rate of the worker ($00.00): ");
		scanf("%lf", &hourlyrate);

		// 計算總工資
		if (hours <= 40) {
			salary = hours * hourlyrate;
		}
		else {
			// 超過40小時的加班，按照"time-and-a-half"計算
			salary = 40 * hourlyrate + (hours - 40) * 1.5 * hourlyrate;
		}

		// 顯示結果
		printf("Salary is $%.2f\n\n", salary);
	}

	system("pause");
	return 0;
}