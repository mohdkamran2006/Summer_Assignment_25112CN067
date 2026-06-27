#include <stdio.h>

struct Contact
{
    char name[50];
    char phone[15];
};

int main()
{
    struct Contact c[3];
    int i;

    printf("Enter details of 3 contacts:\n");

    for(i = 0; i < 3; i++)
    {
        printf("\nContact %d\n", i + 1);

        printf("Name: ");
        scanf("%s", c[i].name);

        printf("Phone Number: ");
        scanf("%s", c[i].phone);
    }

    printf("\n------ Contact List ------\n");

    for(i = 0; i < 3; i++)
    {
        printf("\nName : %s\n", c[i].name);
        printf("Phone: %s\n", c[i].phone);
    }

    return 0;
}