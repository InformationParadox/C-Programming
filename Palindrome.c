#include <stdio.h>

int main() {
    int a,b,c, d;
    printf("Enter a number ");
    scanf("%d",&a);
    b = a;
    while (b > 0) {
    c = b % 10;
    d = d * 10 + c;
    b = b/10;
    } ;
    if ( a == d){
        printf("%d is palindrome",d);
    }else{
        printf("%d is not palindrome",a);
    }
    return 0;
}
