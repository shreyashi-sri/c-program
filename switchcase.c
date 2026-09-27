#include <stdio.h>
int main()
{
    int n;
    float amt,bal;
    printf("Enter last checked balance: ");
    scanf("%f",&bal);
    printf("1. Deposit\n2. Withdraw\n3. Check Balance\n4. Exit\n");
    printf("Enter your choice: ");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
            printf("Enter amount to deposit: ");
            scanf("%f",&amt);
            bal = bal + amt;
            printf("New balance: %.2f\n",bal);
            break;
        case 2:
            printf("Enter amount to withdraw: ");
            scanf("%f",&amt);
            if(amt > bal)
                printf("Insufficient balance!\n");
            else
            {
                bal = bal - amt;
                printf("New balance: %.2f\n",bal);
            }
            break;
        case 3:
            printf("Current balance: %.2f\n",bal);
            break;
        case 4:
            printf("Exiting...\n");
            break;
        default:
            printf("Invalid choice!\n");
    }
}