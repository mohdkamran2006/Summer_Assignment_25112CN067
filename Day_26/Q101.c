#include <stdio.h>

int main()
{
    FILE *fp;

    fp = fopen("data.txt", "w");

    fprintf(fp, "Hello World");
    fprintf(fp, "\nWelcome to File Handling");

    fclose(fp);

    printf("Data Written Successfully");

    return 0;
}