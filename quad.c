#include <stdio.h>
#include <math.h>
int main ()
{
float b,a,c,d,r1,r2,rp,ip;
printf ("enter the values of a,b,c");
scanf ("%f %f %f", &a,&b,&c);
d = (b*b) - (4*a*c);
if (d>0)
{
printf("real and distinct");
r1=(-b+sqrt(d))/(2*a);
r2=(-b-sqrt(d))/(2*a);
printf("%f %f",r1,r2);
}
else if (d==0)
{
printf ("real and equal");
r1=-b/(2*a);
r2=-b/(2*a);
printf("%f %f",r1,r2);
}
else 
{
printf("Roots are imaginary"); 

}
return 0;
}
