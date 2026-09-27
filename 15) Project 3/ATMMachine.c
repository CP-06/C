#include <stdio.h>

int main() 
{
    int pin = 1234;   // Default PIN
    int enteredPin;
    int balance = 10000; // Initial balance
    int choice, amount;

    printf("Welcome to ATM Simulator\n");
    printf("Enter your PIN: ");
    scanf("%d", &enteredPin);

    if (enteredPin != pin) 
    {
        printf("Invalid PIN. Access Denied.\n");
        return 0;
    }

    do 
    {
        printf("\n--- ATM Menu ---\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Your balance is: %d\n", balance);
                break;
            case 2:
                printf("Enter amount to deposit: ");
                scanf("%d", &amount);
                balance += amount;
                printf("Deposit successful. New balance: %d\n", balance);
                break;
            case 3:
                printf("Enter amount to withdraw: ");
                scanf("%d", &amount);
                if (amount > balance) 
                {
                    printf("Insufficient balance!\n");
                } else 
                {
                    balance -= amount;
                    printf("Withdrawal successful. New balance: %d\n", balance);
                }
                break;
            case 4:
                printf("Thank you\n");
                break;
            default:
                printf("Invalid choice. Try again.\n");
        }
    } 
    while (choice != 4);

    return 0;
}
