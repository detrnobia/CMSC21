#include <stdio.h>

int main(void) {
    int i;          // Declaration of an integer variable i
    float x;        // Declaration of a float variable x

    i = 40;         // Assigning a value of 40 to the variable i
    x = 839.2f;     // Assigning a value of 839.2 to the variable x

    // Printing the formatted output using printf function
    /*The format specifiers in the format string are explained as follows:
	|%d|: Prints the value of i as a decimal integer.
	%5d: Prints the value of i as a decimal integer, right-aligned within a field width of 5.
	%-5d: Prints the value of i as a decimal integer, left-aligned within a field width of 5.
	%5.3d: Prints the value of i as a decimal integer, right-aligned within a field width of 5, and with leading zeros if necessary to make a total of 3 digits.*/
    printf(" |%d| %5d|%-5d|%5.3d|\n", i, i, i, i);
    printf(" |%10.3f| %10.3e| %-10g|\n", x, x, x);
    /*%10.3f: Prints the value of x as a float with 3 digits after the decimal point, right-aligned within a field width of 10.
	%10.3e: Prints the value of x in scientific notation with 3 digits after the decimal point, right-aligned within a field width of 10.
	%-10g: Prints the value of x in general format, left-aligned within a field width of 10.*/
    return 0;
}
