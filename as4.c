#include <stdio.h>
int main()
	{
	printf("Performing Task 4...\n");

    printf("Table of Powers of Two\n\n");
    printf(" n \t2 to the n\n");
    printf("___\t__________\n\n");
    // Iterates thru the power of two and displays the results as a table
    int power = 1;
    for (int i = 0; i <= 10; i++) {
        printf("%2d\t%7d\n", i, power);
        power *= 2;
    }
return 0;
}