#include <stdio.h>

int main()
{
    int dN,revsum=0,q,r,i=1;
    printf("Enter the decimal number \n");
    scanf("%d",&dN);
    while(q!=0)
        {q=dN/2;
        r=dN%2;
        dN=q;
        revsum+=r*i;
        i=i*10;
        }
    printf("Binary Equivalent is %d",revsum);
}