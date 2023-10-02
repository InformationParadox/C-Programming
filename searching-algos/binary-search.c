#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (int i = 0; i < n; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[min])
            {
                min = j;
            }
        }
        int temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
    int data, elem;
    printf("Data to find ");
    scanf("%d", &data);
    int start = 0,
        end = n - 1;
    int found = 0;
    elem = (end + start) / 2;
    printf("%d\n", elem);
    while (start != end)
    {
        if (end >= start)
            elem = start + (end - start) / 2;
        if (data == a[elem])
        {
            found = 1;
            break;
        }
        else if (data > a[elem])
        {
            start = elem + 1;
        }
        else
        {
            end = elem - 1;
        }
    }
    if (found)
        printf("Found");
    else
        printf("Not Found");
}
