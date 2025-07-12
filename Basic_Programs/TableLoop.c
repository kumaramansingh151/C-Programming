#include<stdio.h>
#include<conio.h>
int main()
{
    int table,i;
    
    printf("Enter a number ");
    scanf("%d",&table);
    
    printf("multiplication table of %d\n",table);
    /* 
    Table using for loop
    for(i=1;i<=10;i++)
    {
         printf("%d x %d = %d\n",table,i,table*i);
    }
     */
     /*
     i=1;
     while(i<=10)
     {
          printf("%d x %d = %d\n",table,i,table*i);
          i++;            
     }
      */
      i=1; 
           do
           {
                printf("%d x %d = %d\n",table,i,table*i);
                i++;
           }
                while(i<=10);
    getch();
    return 0;
    
}
