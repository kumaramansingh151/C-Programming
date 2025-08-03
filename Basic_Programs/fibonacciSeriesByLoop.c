#include <stdio.h>
#include <conio.h>

int main()
{
    int n, a = 0, b = 1, result, i;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series : ");

    for (i = 1; i <= n; i++)
    {
        printf("%d  ", a);
        result = a + b;
        a = b;
        b = result;
    }

    getch();
    return 0;
}
