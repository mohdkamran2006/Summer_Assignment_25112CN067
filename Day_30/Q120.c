#include <stdio.h>

struct Student
{
    int roll;
    char name[50];
    float m1, m2, m3;
    float total;
    float percentage;
};

int main()
{
    struct Student s;
    char grade;

    printf("Enter Roll Number: ");
    scanf("%d", &s.roll);

    printf("Enter Name: ");
    scanf("%s", s.name);

    printf("Enter Marks of 3 Subjects: ");
    scanf("%f %f %f", &s.m1, &s.m2, &s.m3);

    s.total = s.m1 + s.m2 + s.m3;
    s.percentage = s.total / 3;

    if(s.percentage >= 90)
        grade = 'A';
    else if(s.percentage >= 75)
        grade = 'B';
    else if(s.percentage >= 60)
        grade = 'C';
    else if(s.percentage >= 40)
        grade = 'D';
    else
        grade = 'F';

    printf("\n------ Result ------\n");
    printf("Roll Number : %d\n", s.roll);
    printf("Name        : %s\n", s.name);
    printf("Total Marks : %.2f\n", s.total);
    printf("Percentage  : %.2f%%\n", s.percentage);
    printf("Grade       : %c\n", grade);

    return 0;
}