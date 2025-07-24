#include <stdio.h>
#include <conio.h>
#include <string.h>

void displayAscii(char name[10]);

int main()
{
    char name[10];

    printf("Enter your Name: ");
    scanf("%s", name);

    displayAscii(name);

    getch();
    return 0;
}
void displayAscii(char name[])
{
    int i = 0;
    while (name[i] != 0)
    {
        printf("%d ", name[i]);
        i++;
    }
}
