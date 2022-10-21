 #include <stdio.h>
#include <math.h>
#define PI 3.14
int main()
{
	float degree,x;
	printf("Enter your number in degree\n");
	scanf ("%f",&degree);
	x= degree*(PI/180);
	float nume=x;
	float deno=1;
	float i=1;
	float sum=0;
	float term;
	do
	{
		term=nume/deno;
		sum=sum+term;
		i=i+2;
		nume=-nume*x*x;
		deno=deno*i*(i-1);
	} while (fabs(term)>0.00001);
	printf("Taylor series computed \n value: sin(%.3f)=%.3f\n",degree,sum);
	printf("value of sin(%.3f) using built in function \n : sin(%.3f)=%.3f\n",degree,degree,sin(x));
return 0;
}
 	
