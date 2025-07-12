#include<stdio.h>
#include<conio.h>

void update(int *num);

int main()

{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    
    update(&num); //passing address
    
    printf("before update: %d\n",num);
    printf("after update: %d\n",num);
    
    getch();
    return 0;    
}

void update(int *num)
{
     *num=*num+10;// valude change using pointer 
}
