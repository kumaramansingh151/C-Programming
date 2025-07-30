#include<stdio.h>
#include<conio.h>

float calculateTotalUnit(float units);

int main()
{
    float units;
    float totalUnits;
    
    printf("Bihar Domestic Electricity Bill Slabs");
    printf("\n\nUnits Consumed\t\t Rate per unit\n\n\t000 - 050\t\t3.20 rupiya\n\t051 - 100\t\t3.90 rupiya\n\t101 - 200\t\t5.10 rupiya\n\t201 - 300\t\t5.80 rupiya\n\t301 - 400\t\t6.50 rupiya\n\tAbove 400\t\t7.10 rupiya");
    
    printf("\n\nTotal electricity consumed in unit: ");
    scanf("%f",&units);
    
    totalUnits = calculateTotalUnit(units);
    
    printf("Electricity Bill for %f units = %.2f rupiya\n",units,totalUnits);
    
    getch();
    return 0;
}
float calculateTotalUnit(float units)
{
    float bill = 0;

    if(units <= 50)
    {
        bill = units * 3.20;
    }
    else if(units <= 100)
    {
        bill = 50 * 3.20 + (units - 50) * 3.90;
    }
    else if(units <= 200)
    {
        bill = 50 * 3.20 + 50 * 3.90 + (units - 100) * 5.10;
    }
    else if(units <= 300)
    {
        bill = 50 * 3.20 + 50 * 3.90 + 100 * 5.10 + (units - 200) * 5.80;
    }
    else if(units <= 400)
    {
        bill = 50 * 3.20 + 50 * 3.90 + 100 * 5.10 + 100 * 5.80 + (units - 300) * 6.50;
    }
    else
    {
        bill = 50 * 3.20 + 50 * 3.90 + 100 * 5.10 + 100 * 5.80 + 100 * 6.50 + (units - 400) * 7.10;
    }

    return bill;
}
