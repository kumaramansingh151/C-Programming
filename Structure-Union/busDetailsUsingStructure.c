#include <stdio.h>
#include <conio.h>

struct specialBus 
{
    char busNumber[6];
    char busColour[10];
    char source[10];
    char deparch[10];
    char driverFirstName[10];
    char driverLastName[20];
};

struct specialBus details(); 
void displayBusDetails(struct specialBus b); 

int main()
 {
    struct specialBus b;

    b=details(); 
    displayBusDetails(b); 

    getch();
    return 0;
}

struct specialBus details()
 {
    struct specialBus bus;

    printf("Enter Driver First Name: ");
    scanf("%s", bus.driverFirstName);

    printf("Enter Driver Last Name: ");
    scanf("%s", bus.driverLastName);

    printf("Enter Bus Colour: ");
    scanf("%s", bus.busColour);

    printf("Enter Bus Number: ");
    scanf("%s", bus.busNumber); 

    printf("Enter Source Place: ");
    scanf("%s", bus.source);

    printf("Enter Destination Place: ");
    scanf("%s", bus.deparch);

    return bus;
}

void displayBusDetails(struct specialBus b)
 {
    printf("\nDriver Name: %s %s\nBus Number: %s\nBus Colour: %s\nSource: %s\nDestination: %s\n",
     b.driverFirstName, b.driverLastName, b.busNumber, b.busColour, b.source, b.deparch);
}
