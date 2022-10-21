#include <stdio.h>
#include <math.h>
int main()
{
 float d,ipart,rpart,a,b,c,r1,r2;
  printf("Enter coeffs:");
  scanf("%f%f%f",&a,&b,&c);
  if (a!=0)
  {
    d = (b*b)-(4*a*c);
    if (d==0)
    {
      r1 = (-b)/(2*a);
      r1 = r2;
      printf("The roots are  r1=r2%f%f",r1,r1);
    }
    else if (d>0)
    {
      r1 = (-b+(sqrt(d)))/(2*a);
      r2 = (-b-(sqrt(d)))/(2*a);
      printf("The roots are  r1=%f and r2=%f",r1,r2);
    }
    else
    {
      rpart = (-b)/(2*a);
      ipart = (sqrt(d))/(2*a);
      printf("roots are imaginary : %f+i%f",rpart,ipart);
      printf("roots are imaginary : %f-i%f",rpart,ipart);
    }
  }
  else
  {
    printf("Invalid");
    return 1;
  }
  return 0;
}
