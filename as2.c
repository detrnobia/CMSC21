#include <stdio.h>

int main()
{
  int i;
    printf("Executing 'while' loop\n");
    i = 10;
    while (i < 10) { printf("Code Executed: %d\n", i); i++; }
    printf("\n");

    printf("Executing 'for' loop\n");
    i = 10;
    for ( ; i < 10 ; ) { printf("Code Executed: %d\n", i); i++; }
    printf("\n");    

    printf("Executing 'do while' loop\n");
    i = 10;
    do { printf("Code Executed: %d\n", i); i++; } while (i < 10);
    printf("\n");

  return 0;
}