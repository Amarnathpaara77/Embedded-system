#include <stdio.h>
#include <math.h>
void main(){
float a,b,c,d;
printf("Enter the coefficient of x*x:");
scanf("%f",&a);
printf("Enter the coefficient of x:");
scanf("%f",&b);
printf("Enter the constant:");
scanf("%f",&c);
d=(b*b)-4*a*c;
if(d>0)
 printf("roots are real\n");
else if(d==0)
 printf("Roots are positive\n");
else
 printf("Roots are imaginary\n");
printf("the roots are:%.2f,%.2f\n",(-b+sqrt((b*b)-4*a*c))/2*a,(-b-sqrt((b*b)-4*a*c))/2*a);
}

