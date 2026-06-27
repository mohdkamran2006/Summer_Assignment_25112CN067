#include <stdio.h>

struct Account
{
    int accountNo;
    char name[50];
    float balance;
};

int main()
{
    struct Account a;
    int choice;
    float amount;

    printf("Enter Account Number: ");
    scanf("%d", &a.accountNo);

    printf("Enter Account Holder Name: ");
    scanf("%s", a.name);

    printf("Enter Initial Balance: ");
    scanf("%f", &a.balance);

    printf("\n1. Deposit\n");
    printf("2. Withdraw\n");
    printf("Enter Choice: ");
    scanf("%d", &choice);

    if(choice == 1)
    {
        printf("Enter Deposit Amount: ");
        scanf("%f", &amount);

        a.balance += amount;
    }
    else if(choice == 2)
    {
        printf("Enter Withdraw Amount: ");
        scanf("%f", &amount);

        if(amount <= a.balance)
            a.balance -= amount;
        else
            printf("Insufficient Balance\n");
    }
    else
    {
        printf("Invalid Choice");
    }

    printf("\nCurrent Balance = %.2f\n", a.balance);

    return 0;
}