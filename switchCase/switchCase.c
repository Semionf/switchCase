#include <stdio.h>

#pragma warning (disable:4996)

int main()
{
	int a = 10, b = 12, res;
	char ch = 0;
	while (ch != 'E') {
		printf("Please enter the action (+,-,/,*) you want to make or E to exit: \n");
		ch = getch();
	switch (ch)
	{
	case '+':
		res = a + b;
		printf("%d + %d = %d\n",a,b, res);
		break;
	case '-':
		res = a - b;
		printf("%d - %d = %d\n", a, b, res);
		break;
	case '/':
		res = a / b;
		printf("%d / %d = %d\n", a, b, res);
		break;
	case '*':
		res = a * b;
		printf("%d * %d = %d\n", a, b, res);
		break;
	case 'E':
		break;
	default:
		printf("Wrong input.");
		break;
	}
	}
}