/* To find the sum difference and product */
#include <stdio.h>
#include <conio.h>
#include <math.h>
main()
{
	float a,b,s,p,d;
	printf("enter a number ");
	scanf("%f",&a);
	printf("enter the second number ");
	scanf("%f",&b);
	s=a+b;
	d=a-b;
	p=a*b;
	printf("The sum is %f, difference is %f and product is %f",s,d,p);
}


