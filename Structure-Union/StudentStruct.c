#include<stdio.h>
#include<conio.h>

/*student deatials lene ke liye bnaya ja rha hai structure(struct)
take all deatials which are needed in student deatials*/
 
struct student
{
       int id;
       int phone;
       int roll;
       char fName[10];
       char lName[10]; 
       char course[10];   
       char email[20];
};

struct student takeStudentDetails();    /* takeStudentDetails() naam ka function ko declaire kiya gya hai 
                                            to the compailer that type of function exest in the program*/
void displayStudentResult();

int main()
{
    struct student s;    //create a variable "s"which stores  input studentdeatials//
       
    s=takeStudentDetails();   /* call : takeStudentDeatails(); and
                                 save in "s" in main function */
    displayStudentResult(s); 
                              /*call displayStudentResult(s); and assine value of "s"*/
    
    getch();
    return 0;
}

struct student takeStudentDetails()     //take input student deatials//  
{
    struct student std; //cerate a std(variable name) //  

    printf("Enter your Registration Number: ");
    scanf("%d",&std.id);
    printf("Enter your first Name: ");
    scanf("%s",std.fName);
    printf("Enter your Last Name: ");
    scanf("%s",std.lName);
    printf("Enter your Course Name: ");
    scanf("%s",std.course);
    printf("Enter your Roll number: ");
    scanf("%d",&std.roll);
    printf("Enter your email id: ");
    scanf("%s",std.email);
    printf("Enter your Phone Number: ");
    scanf("%d",&std.phone);
    
    return std;   //return std is only exist in this input function//
}

/*the void function is made for display Output and void is for no return type*/

void displayStudentResult(struct student a) 
{
       printf("\n\nYour Registration number is:%d\nYour name is:%s %s\n your course is:%s\nRoll:%d\nemail id\nPhone no:%d"
       ,a.id,a.fName,a.lName,a.course,a.roll,a.email,a.phone);
}
