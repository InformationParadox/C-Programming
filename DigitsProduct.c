#include <stdio.h>

int main()
{
    int n, c, d, init;
    printf("Enter a number ");
    scanf("%d", &n);
    d = 1;
    init = n;
    while (n > 0)
    {
        c = n % 10;
        d = d * c;
        n = n / 10;
    };

    printf("The product of digits of %d is %d", init, d);
    return 0;
}