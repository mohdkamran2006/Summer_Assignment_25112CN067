#include <stdio.h>

struct Book
{
    int id;
    char name[50];
    int quantity;
};

int main()
{
    struct Book b[3];
    int i;

    printf("Enter Book Details:\n");

    for(i = 0; i < 3; i++)
    {
        printf("\nBook %d\n", i + 1);

        printf("Book ID: ");
        scanf("%d", &b[i].id);

        printf("Book Name: ");
        scanf("%s", b[i].name);

        printf("Quantity: ");
        scanf("%d", &b[i].quantity);
    }

    printf("\n------ Library Records ------\n");

    for(i = 0; i < 3; i++)
    {
        printf("\nBook ID : %d", b[i].id);
        printf("\nBook Name : %s", b[i].name);
        printf("\nQuantity : %d\n", b[i].quantity);
    }

    return 0;
}