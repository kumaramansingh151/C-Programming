#include<stdio.h> 
#include<conio.h>
int main()
{
    char name[10]; 
    printf("Enter your name ");
    scanf("%s",name);
    
    printf("your name is %s",&name);
    getch();
    return 0;
}