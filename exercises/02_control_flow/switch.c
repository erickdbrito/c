/*
 * Exercise: Switch Statement
 * 
 * Description:
 * Use switch statements for multi-way branching.
 * 
 * Learning objectives:
 * - Use switch-case statements
 * - Understand the break statement
 * - Know when to use switch vs if-else
 */

#include <stdio.h>

int main() {
    int day = 3;
    
    printf("Day number: %d\n", day);
    printf("Day name: ");
    
    switch (day) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("Invalid day\n");
    }
    
    return 0;
}
