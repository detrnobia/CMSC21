#include <stdio.h>
#include <stdbool.h>
#define NUM_PATHWAYS ((int) (sizeof(pathway1) / sizeof(pathway1[0]))) 
int main()
    {

bool pathway1[8] = {[0] = 1, [2] = 1}; // Should be {[0] = 1, [2] = 1} but it does not work on my compiler
    for (int i = 0; i < NUM_PATHWAYS; i++) {
        if (pathway1[i]) {
            printf("pathway[%d] is open \n", i);
        } else {
            printf("pathway[%d] is close \n", i);
        }
    }

    printf("\n");

    /* Task 6b */
	printf("Task 6b...\n");

    // Revised code for Task 6 using shortest possible intialization
    bool pathway2[8] = {1, 0, 1};
    for (int i = 0; i < NUM_PATHWAYS; i++) {
        if (pathway2[i]) {
            printf("pathway[%d] is open \n", i);
        } else {
            printf("pathway[%d] is close \n", i);
        }
    }
return 0;
}