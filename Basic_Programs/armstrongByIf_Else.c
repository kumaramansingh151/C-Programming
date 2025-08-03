#include<stdio.h>
#include<math.h>
#include<conio.h>

int main()
{
    int num, originalNum, remainder, result = 0, n = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

 // Step 1: Count total digits (n)
    while (originalNum != 0)
    {
        originalNum = originalNum / 10;
        n++;
    }

 // Reset again: originalNum = 153
    originalNum = num;    

// Step 2: Sum of each digit to the power n
    while (originalNum != 0)
    {
        remainder = originalNum % 10;
        result = result + pow(remainder, n);  // pow(base, exponent)
        originalNum = originalNum / 10;
    }

    if (result == num)
    {
        printf("%d is an Armstrong number.\n", num);
    }
    else
    {
        printf("%d is NOT an Armstrong number.\n", num);
    }
    
    getch();
    return 0;
}
