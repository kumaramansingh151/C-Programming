#include <stdio.h>
#include <conio.h>

float celsiusToFahrenheit(float celsius);
float fahrenheitToCelsius(float fahrenheit);

int main()
{
    int choice;
    float celsius, fahrenheit;

    printf("Enter 1: Fahrenheit To Celsius\nEnter 2: Celsius To Fahrenheit\n\t\tOption : ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("\nEnter temperature in Fahrenheit: ");
        scanf("%f", &fahrenheit);
        celsius = fahrenheitToCelsius(fahrenheit);
        printf("\nTemperature in celsius = %.2f°C\n", celsius);
        break;

    case 2:
        printf("\nEnter temperature in Celsius: ");
        scanf("%f", &celsius);
        fahrenheit = celsiusToFahrenheit(celsius);
        printf("\nTemperature in Fahrenheit = %.2f°F\n", fahrenheit);
        break;

    default:
        printf("Not a correct choise");
    }

    getch();
    return 0;
}

/*Function to convert Celsius to Fahrenheit
Fahrenheit (F)=(Celsius×9/5)+32*/
float celsiusToFahrenheit(float celsius)
{
    return (celsius * 9 / 5) + 32;
}

/*Function to convert Fahrenheit to Celsius
Celsius (°C)=(Fahrenheit (°F)-32)×9/5*/
float fahrenheitToCelsius(float fahrenheit)
{
    return (fahrenheit - 32) * 5 / 9;
}
