 #include<stdio.h>
#include<conio.h>
    
 float PI=3.14;   
    
 int main()
 {
     float radious, circumfarance, diameter;
     double area;
         
     printf(" Enter radious of the circle\t");
     scanf("%f",&radious);
     
     diameter=2*radious;
     printf("Daimeter of the circle with radious %f is: %.2f\n",radious,diameter);
     
     circumfarance=2*PI*radious;
     printf("circumfarance of the circle with radious %f is:%.2f\n",radious,circumfarance);
     
     area=PI*radious*radious;
     printf("Area of the circle with radious = %f is = %.3lf\n",radious,area);
     
     getche();
     return 0;
     
 }
