#include <stdio.h>

int main() {
    int num1, num2, num3, num4, num5;
    int choice;
    int total, average, smallest, largest;

    // Read 5 numbers
    printf("Enter 5 numbers:\n");
    scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);

    // Display menu
    printf("Menu:\n");
    printf("1. Calculate Total\n");
    printf("2. Calculate Average\n");
    printf("3. Display Smallest Number\n");
    printf("4. Display Largest Number\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    // Perform calculations based on user's choice
    switch (choice) {
        case 1:
            total = num1 + num2 + num3 + num4 + num5;
            printf("Total: %d\n", total);
            break;
        case 2:
            total = num1 + num2 + num3 + num4 + num5;
            average = total / 5;
            printf("Average: %d\n", average);
            break;
        case 3:
            smallest = num1;
            if (num2 < smallest) smallest = num2;
            if (num3 < smallest) smallest = num3;
            if (num4 < smallest) smallest = num4;
            if (num5 < smallest) smallest = num5;
            printf("Smallest Number: %d\n", smallest);
            break;
        case 4:
            largest = num1;
            if (num2 > largest) largest = num2;
            if (num3 > largest) largest = num3;
            if (num4 > largest) largest = num4;
            if (num5 > largest) largest = num5;
            printf("Largest Number: %d\n", largest);
             break;
             defult:
             printf("Invalid choice.Please choose the number between 1 and 4.\n");
                   break;

             }
               return 0;

               }



