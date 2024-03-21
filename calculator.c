// C Program to make a Simple Calculator
// Using switch case
#include <stdio.h>
#include <stdlib.h>

// code
int main()
{
	int ch;
	double a, b;
	while (1) {
		printf("Enter 1. Addition\n");
		printf("Enter 2.Subtraction\n");
		printf("Enter 3.Multiplication\n");
		printf("Enter 4.Division\n");
		printf("Enter your choice:\t");
		scanf("%d",&ch);

		printf("Enter two first and second operand: ");
		scanf("%lf %lf", &a, &b);

		// Using switch case we will differentiate
		// operations based on different operator
		switch (ch) {

		// For Addition
		case 1:
			printf("%.1lf + %.1lf = %.1lf\n", a, b, a + b);
			break;

		// For Subtraction
		case 2:
			printf("%.1lf - %.1lf = %.1lf\n", a, b, a - b);
			break;

		// For Multiplication
		case 3:
			printf("%.1lf * %.1lf = %.1lf\n", a, b, a * b);
			break;

		// For Division
		case 4:
			printf("%.1lf / %.1lf = %.1lf\n", a, b, a / b);
			break;

		// If operator doesn't match any case constant
		default:
			printf(
				"Error! please write a valid operator\n");
		}

		printf("\n");
	}
}
