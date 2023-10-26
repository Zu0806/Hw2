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

		// �p���`�u��
		if (hours <= 40) {
			salary = hours * hourlyrate;
		}
		else {
			// �W�L40�p�ɪ��[�Z�A����"time-and-a-half"�p��
			salary = 40 * hourlyrate + (hours - 40) * 1.5 * hourlyrate;
		}

		// ��ܵ��G
		printf("Salary is $%.2f\n\n", salary);
	}

	system("pause");
	return 0;
}