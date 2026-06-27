#include <stdio.h>

int main()
{
    char name[50];
    int age;

    printf("Enter Name: ");
    scanf("%s", name);

    printf("Enter Age: ");
    scanf("%d", &age);

    printf("\n----- Voting Eligibility -----\n");

    if(age >= 18)
    {
        printf("%s is Eligible to Vote.\n", name);
    }
    else
    {
        printf("%s is Not Eligible to Vote.\n", name);
    }

    return 0;
}
