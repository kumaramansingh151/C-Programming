#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    int i = 0;
    char name[10];

    printf("Enter your Name: ");
    scanf("%s", name);

    while (name[i] != 0)
    {
        printf("%d ", name[i]);
        i++;
    }

    getch();
    return 0;
}
