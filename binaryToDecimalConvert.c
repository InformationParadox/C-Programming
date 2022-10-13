#include<stdio.h>
#include<math.h>

int main()
{
    int n,r,sum=0,i=0;
    printf("Enter the binary digit for conversion into decimal");
    scanf("%d",&n);
    while(n>0)
        {r=n%10;
        sum+=r*pow(2,i);
        n/=10;
        i++;
        }
    printf("The equivalent decimal is %d",sum);
    return 0;
}