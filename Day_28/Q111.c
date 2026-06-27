#include <stdio.h>

int main()
{
    char name[50];
    int seats;
    float price = 250;

    printf("Enter Customer Name: ");
    scanf("%s", name);

    printf("Enter Number of Seats: ");
    scanf("%d", &seats);

    printf("\n------ Ticket Details ------\n");
    printf("Customer Name : %s\n", name);
    printf("Seats Booked : %d\n", seats);
    printf("Total Amount : %.2f\n", seats * price);

    return 0;
}