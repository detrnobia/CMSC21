#include <stdio.h>

int main() {
int month_days, start_day;
    printf("Enter the number of days in the month (28-31): "); scanf("%d", &month_days);
    printf("Enter the starting day of the week (1 = Sunday, 7 = Saturday): "); scanf("%d", &start_day);
    printf("\n");

    if (month_days >= 28 && month_days <= 31 && start_day >= 1 && start_day <= 7) {
        // Declares and initializes a block variable to track the position in the calendar
        int block = 0;
        // Prints out the spaces before the first day of the month
        for (int space = 1; space < start_day; space++) {
            printf("   ");
            block++;
        }
        // Prints out the days of the calendar, adding a newline character every seventh block, including the first spaces
        for (int days = 1; days <= month_days; days++) {
            printf("%2d ", days);
            block++;
            if (block % 7 == 0) {
                printf("\n");
            }
        }
    } else {
        printf("You have inputed invalid values for the calendar.\n");
    }
    return 0;
}
