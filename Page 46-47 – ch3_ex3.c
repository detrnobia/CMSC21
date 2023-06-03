#include <stdio.h>

int main(void)
{
	// Declare variables
	int num1, denom1, num2, denom2, result_num, result_denom;

	/*These lines prompt the user to enter the first fraction and read the input from the user using scanf. 
	The format specifier %d/%d specifies that the input should be in the form of an integer followed by a slash (/) 
	and another integer. The values entered by the user will be stored in the variables num1 and denom1*/
	printf("Enter first fraction: ");
	scanf("%d/%d", &num1, &denom1);

	// Prompt user to enter the second fraction
	printf("Enter second fraction: ");
	scanf("%d/%d", &num2, &denom2);

	/*These lines perform the addition operation for fractions. 
	The numerator of the result is calculated by multiplying the numerator of the first fraction (num1) by the denominator of the second fraction (denom2) 
	and adding it to the product of the numerator of the second fraction (num2) and the denominator of the first fraction (denom1). 
	The result is stored in the variable result_num. 
	The denominator of the result is calculated by multiplying the denominators of both fractions (denom1 and denom2) and stored in the variable result_denom.*/
	result_num = num1 * denom2 + num2 * denom1;
	result_denom = denom1 * denom2;

	// Print the result and he format specifier %d/%d is used to display the numerator and denominator
	printf("The sum is %d/%d\n", result_num, result_denom);

	return 0;
}
