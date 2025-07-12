#include<stdio.h>
#include<conio.h>

char checkPrimeNumber(int num);
void checkNegativePositiveNumber(int num);
void checkEvenOdd(int num);
int calculatesquare(int num);
void getFactors(int num);
void writeTable(int num); 
int calculatecube(int square,int num);

int main()
{
    int num,square,cube;
    char prime;
    
    printf("Enter a number: ");
    scanf("%d",&num);
    
    checkNegativePositiveNumber(num); 
    checkEvenOdd(num);
    
    prime=checkPrimeNumber(num);
    if(prime=='p')
  
    {
         printf("\n%d is a prime number",num);
         int i;
         for(i=1;i<num;i++)
         {
              prime=checkPrimeNumber(i);
              if(prime=='p')
              {
                   printf("\t%d",i);     
              }
         }
    }
    else if(prime=='c')
    {
         printf("\n%d is a composite number",num);
         int i;
         for(i=1;i<num;i++)
         {
              prime=checkPrimeNumber(i);
              if(prime=='c')
              {
                   printf("\t%d",i);     
              }
         } 
    }

          
    calculatesquare(num);
    getFactors(num);
    writeTable(num);
    
    square=calculatesquare(num);
    printf("\n\n%d of square is: %d",num,square);
    
    cube=calculatecube(square,num);
    printf("\n%d of the cube is: %d",num,cube);
    
    getch();
    return 0;
}

char checkPrimeNumber(int num)
{
     int c=0;
     int i;
     for(i=1;i<=num;i++)
     {
         if(num%i==0)
         {
              c++;                        
         }                       
     }
     if(c>2)
     {
        return 'c';
     }
     else if(c==2)
     {
        return 'p';
     }
     else
     {
         return 'e';
     }
}
void checkNegativePositiveNumber(int num)
{
     if(num<0)
     {
         printf("\n%d is a neagative number ",num);
     }
     else if(num>0)
     {
         printf("\n%d is a positive number ",num);
     }
     else
     {
         printf("\nZero is a nutral number");
     }
}
void checkEvenOdd(int num)
{
     if(num==0)
     {
         printf(" The number is 0 it's not even or odd");
     }
     else if(num%2==0)
     {
         printf("\n%d is a even number",num);
     }
     else
     {
         printf("\n%d is a odd number",num);
     }
}
int calculatesquare(int num)
{
    int square;
    square=num*num;
    return square;
}

void getFactors(int num)
{
    int i;
    int count=0;
    printf("\n\nfactors of %d is :",num);

     for(i=1;i<=num;i++)
     {
         if(num%i==0)
         {
              printf("\t%d",i);
              count++;
         }
     }
     printf("\nThere are %d factors for this number ",count);
}    

void writeTable(int num)
{
     printf("\n\nTable of %d :",num);
     int i;
     for(i=1;i<=10;i++)
     {
     printf("\n\t%d x %d = %d",num,i,num*i);
     }
}
int calculatecube(int square,int num)
{
    int cube;
    cube=square*num;
    return cube;
}
