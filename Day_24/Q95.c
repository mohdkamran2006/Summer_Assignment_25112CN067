#include <stdio.h>

int main()
{
    int arr[100], n, i;
    int sum = 0;
    int *ptr;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    ptr = arr;

    for(i = 0; i < n; i++)
    {
        sum += *(ptr + i);
    }

    printf("Sum = %d", sum);

    return 0;
}