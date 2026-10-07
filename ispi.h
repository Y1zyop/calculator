#include <stdio.h>
#include <stdbool.h>

void calcu() {
	float x, y, res;
	bool again = true;
	char a;
	while (again) {
		printf("Write operation + - * /\n");
		scanf_s(" %c", &a, 1);
		if (a != '+' && a != '-' && a != '*' && a != '/') {
			printf("ERROR\n");
			continue;
		}
		printf("Write number\n");
		scanf_s("%f", &x);
		printf("Write number\n");
		scanf_s("%f", &y);
		if (a == '+') {
			res = x + y;
			printf("%.2f\n", res);

		}
		else if (a == '-') {
			res = x - y;
			printf("%.2f\n", res);
		}
		else if (a == '*') {
			res = x * y;
			printf("%.2f\n", res);
		}
		else if (a == '/') {
			if (y != 0) {
				res = x / y;
				printf("%.2f\n", res);
			}
			else {
				printf("ERROR\n");
			}
		}
		char answer;
		printf("AGAIN? (y/n)\n");
		scanf_s(" %c", &answer);
		if (answer == 'n') {
			again = false;
			printf("Bye\n");
		}
	}
	
}
