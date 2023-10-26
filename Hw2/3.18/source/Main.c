#include <stdio.h>

int main() {
	// 宣告變數
	double g, e;

	while (1)
	{
		// 輸入銷售額
		printf("Enter sales in dollars (-1 to end): ");
		scanf("%lf", &g);
		if (g == -1)
			break;

		// 計算收入
		e = 200 + 0.09 * g;

		// 顯示結果
		printf("Salary is: $%.2f\n\n", e);
	}

	system("pause");
	return 0;
}






