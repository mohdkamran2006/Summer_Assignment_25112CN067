#include <stdio.h>

int main()
{
    FILE *fp;

    fp = fopen("data.txt", "a");

    fprintf(fp, "\nThis line is appended.");

    fclose(fp);

    printf("Data Appended Successfully");

    return 0;
}