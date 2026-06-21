#include <stdio.h>

int main()
{
    int arr[100], n, i;
    int *ptr, largest;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    ptr = arr;
    largest = *ptr;

    for(i = 1; i < n; i++)
    {
        if(*(ptr + i) > largest)
        {
            largest = *(ptr + i);
        }
    }

    printf("Largest Element = %d", largest);

    return 0;
}