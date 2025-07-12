#include<stdio.h>
#include<conio.h>

float getPercentageMarks(int data[5]);
int getTotalMarks(int marks[5]);
void identifyGrade(float p);
int valideMarks(int marks[5]);
void checkSubFail(int marks[5]);

int main()
{
    int marks[5];
    float marksPercent;
    int marksValid,totalMarks;
    char firstName[10];
    char lastName[10];
    
   
    printf("Enter your First Name: ");
    scanf("%s",firstName);
    printf("Enter your Last name: ");
    scanf("%s",lastName);
    printf("\nHay:%s %s Enter your marks Now! ",firstName,lastName);
    printf("\n\nEnter Hindi marks = ");
    scanf("%d",&marks[0]);
    printf("Enter English marks =");
    scanf("%d",&marks[1]);
    printf("Enter Math marks =");
    scanf("%d",&marks[2]);
    printf("Enter Physics marks = ");
    scanf("%d",&marks[3]);
    printf("Enter Chemistry marks = ");
    scanf("%d",&marks[4]);

    marksValid=valideMarks(marks);
    if (marksValid == 1)
     
    {
        // calculate total marks 
        totalMarks=getTotalMarks(marks);
        printf("You have score total marks of %d",totalMarks);
         // Declariation pass/fail
         checkSubFail(marks);
        // calculate percentage 
         marksPercent=getPercentageMarks(marks);
         printf("\nYour Percentage is %.2f",marksPercent);
         // find devesion
         identifyGrade(marksPercent);
        
    }
         
    getch();
    return 0;
    
}  

int getTotalMarks(int marks[5])

{
    int totalmarks;
    totalmarks=marks[0]+marks[1]+marks[2]+marks[3]+marks[4];
    return totalmarks;
}
    
float getPercentageMarks(int data[5])

{
      float percent;
      float totalmarks=getTotalMarks(data);
      percent=totalmarks/5;
      return percent;
}

void identifyGrade(float p)

{
     if(p<30)
     {
             printf("\nyou are fail");
     }
     else if(p<45)
     {
           printf("\nYou are Third Devesion ");      
     }
     else if(p<60)
     {
           printf("\nYou are Second Devesion ");
     }
     else if(p<=100)
     {
          if(p>80)
          {
               printf("\nExcellent,Your marks is more than 80 percent ");
          }
          else
          { 
               printf("\nYou are First Devesion");
          }
     }
     else
      
     {
           printf("\nInvalid Percentage that is %f",p);      
     }     
}

int valideMarks(int marks[5])
{
     int i;
     for(i=0;i<5;i++)
     {
          if(marks[i]>100 || marks[i]<0)
          {
              printf("Marks is  invalid = %d\n",marks[i]);
              return 0;
                   
          }          
     }  
     return 1;
        
}
void checkSubFail(int marks[5])
{
    if(marks[0]<30)
    {
         printf("\nYou are failed in hindi");          
    }
    if(marks[1]<30)
    {
         printf("\nYou are failed in english");               
    }
    if(marks[2]<30)
    {
         printf("\nYou are failed in Math");               
    }
    if(marks[3]<30)
    {
         printf("\nYou are failes in Physics");
    }
    if(marks[4]<30)
    {
         printf("\nYou are failed in Chemistry");
    }
}
 
void printMarksheet(firstName,lastName,totalMarks,marksPercent,checkSubFail,identifyGrade)
{
     printf("");     
} 
