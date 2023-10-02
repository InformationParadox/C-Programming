#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    int a;
    printf("Data to find ");
    scanf("%d", &a);
    int found = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == a)
        {
            found = 1;
            break;
        }
    }
    if (found)
        printf("Data Found");
    else
        printf("Data not Found");
}