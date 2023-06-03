#include <stdio.h>

int main() {
    int i, j;       // Declaration of integer variables i and j
    float x, y;     // Declaration of float variables x and y

    i = 10;         // Assigning a value of 10 to variable i
    j = 20;         // Assigning a value of 20 to variable j

    //The f suffix is used to ensure that the literal is treated as a float instead of a double
    x = 43.2892f;   // Assigning a value of 43.2892 to variable x
    y = 5527.0f;    // Assigning a value of 5527.0 to variable y

    // Printing the values of i, j, x, and y using printf function
    printf(" i = %d, j = %d, x = %f, y = %f\n", i, j, x, y);

	//A statement used to terminate the main function and indicate successful program execution.    
    return 0;
}

