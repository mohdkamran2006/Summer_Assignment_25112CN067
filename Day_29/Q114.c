#include <stdio.h>

int main()
{
    int arr[100], n, i;
    int choice, sum = 0, largest;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\n1. Display Array");
    printf("\n2. Find Sum");
    printf("\n3. Find Largest Element");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            for(i = 0; i < n; i++)
                printf("%d ", arr[i]);
            break;

        case 2:
            for(i = 0; i < n; i++)
                sum += arr[i];

            printf("Sum = %d", sum);
            break;

        case 3:
            largest = arr[0];

            for(i = 1; i < n; i++)
            {
                if(arr[i] > largest)
                    largest = arr[i];
            }

            printf("Largest Element = %d", largest);
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}