#include <stdio.h>

struct Student
{
    int roll;
    float marks;
};

void display(struct Student s)
{
    printf("Roll = %d\n", s.roll);
    printf("Marks = %.2f\n", s.marks);
}

int main()
{
    struct Student s;

    printf("Enter Roll and Marks: ");
    scanf("%d %f", &s.roll, &s.marks);

    display(s);

    return 0;
}