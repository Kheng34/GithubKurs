#include <stdio.h>

int a, b, op, res, restart = 1;

int main() {
	while(restart == 1) {
		printf("Please enter first number: "); scanf("%d", &a);
		printf("Please enter second number: "); scanf("%d", &b);
		printf("1>Addition\n2>Subtraction\n3>Multiplication\n4>Division\n5>Modulo\nPlease select your operation: "); scanf("%d", &op);
		switch(op) {
			case 1:
				res = a + b;
				break;
			case 2:
				res = a - b;
				break;
			case 3:
				res = a * b;
				break;
			case 4:
				res = a / b;
				break;
			case 5:
				res = a % b;
				break;
		}
		printf("Result: %d\n", res);
		printf("1>Reset\n2>Exit\n"); scanf("%d", &restart);
	}
	printf("\n");system("PAUSE");return 0;
}
