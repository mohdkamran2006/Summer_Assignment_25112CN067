#include <stdio.h>

struct Book
{
    int id;
    char name[50];
    char author[50];
};

int main()
{
    struct Book b[3];
    int i;

    printf("Enter details of 3 books:\n");

    for(i = 0; i < 3; i++)
    {
        printf("\nBook %d\n", i + 1);

        printf("Book ID: ");
        scanf("%d", &b[i].id);

        printf("Book Name: ");
        scanf("%s", b[i].name);

        printf("Author Name: ");
        scanf("%s", b[i].author);
    }

    printf("\n------ Library Records ------\n");

    for(i = 0; i < 3; i++)
    {
        printf("\nBook %d\n", i + 1);
        printf("Book ID : %d\n", b[i].id);
        printf("Book Name : %s\n", b[i].name);
        printf("Author : %s\n", b[i].author);
    }

    return 0;
}