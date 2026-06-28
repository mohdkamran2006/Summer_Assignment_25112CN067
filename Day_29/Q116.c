#include <stdio.h>

struct Item
{
    int id;
    char name[50];
    int quantity;
    float price;
};

int main()
{
    struct Item item[3];
    int i;

    printf("Enter details of 3 items:\n");

    for(i = 0; i < 3; i++)
    {
        printf("\nItem %d\n", i + 1);

        printf("Item ID: ");
        scanf("%d", &item[i].id);

        printf("Item Name: ");
        scanf("%s", item[i].name);

        printf("Quantity: ");
        scanf("%d", &item[i].quantity);

        printf("Price: ");
        scanf("%f", &item[i].price);
    }

    printf("\n------ Inventory ------\n");

    for(i = 0; i < 3; i++)
    {
        printf("\nID       : %d", item[i].id);
        printf("\nName     : %s", item[i].name);
        printf("\nQuantity : %d", item[i].quantity);
        printf("\nPrice    : %.2f\n", item[i].price);
    }

    return 0;
}