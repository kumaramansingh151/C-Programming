#include <stdio.h>
#include <conio.h>

float celsiusToFahrenheit(float celsius);
float fahrenheitToCelsius(float fahrenheit);

int main()
{
	int choice = 1;
	float celsius, fahrenheit;

	while (choice != 0)
	{
		clrscr();
		printf("Enter 1: Fahrenheit To Celsius\nEnter 2: Celsius To Fahrenheit\nenter 0: for exit \n\t\tOption : ");
		scanf("%d", &choice);

		switch (choice)
		{
		case 0:
			return 0;

		case 1:
			printf("\nEnter temperature in Fahrenheit: ");
			scanf("%f", &fahrenheit);
			celsius = fahrenheitToCelsius(fahrenheit);
			printf("\nTemperature in celsius = %.2fÂ°C\n", celsius);
			getch();
			break;

		case 2:
			printf("\nEnter temperature in Celsius: ");
			scanf("%f", &celsius);
			fahrenheit = celsiusToFahrenheit(celsius);
			printf("\nTemperature in Fahrenheit = %.2fÂ°F\n", fahrenheit);
			getch();
			break;

		default:
			printf("Not a correct choise");
			getch();
		}
	}
	getch();
	return 0;
}

/*Function to convert Celsius to Fahrenheit
Fahrenheit (F)=(CelsiusÃ—9/5)+32*/
float celsiusToFahrenheit(float celsius)
{
	return (celsius * 9 / 5) + 32;
}

/*Function to convert Fahrenheit to Celsius
Celsius (Â°C)=(Fahrenheit (Â°F)-32)Ã—9/5*/
float fahrenheitToCelsius(float fahrenheit)
{
	return (fahrenheit - 32) * 5 / 9;
}
