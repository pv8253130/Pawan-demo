#include <stdio.h>

int main() {
    int choice;
    float balance = 0.0, amount;

    printf("********** WELCOME TO AXIS BANK **********\n");
    printf("Select your choice:\n");
    printf("1. Amount Deposit\n");
    printf("2. Amount Withdrawal\n");
    printf("3. Check Your Amount\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Enter amount to deposit: ");
            scanf("%f", &amount);
            balance =balance+ amount;
            printf("Successfully deposited ₹%.2f\n", amount);
            printf("Your new balance is ₹%.2f\n", balance);
            break;

        case 2:
            printf("Enter amount to withdraw: ");
            scanf("%f", &amount);
            if(amount > balance) {
                printf("Insufficient balance!\n");
            } else {
                balance -= amount;
                printf("Successfully withdrawn ₹%.2f\n", amount);
                printf("Your remaining balance is ₹%.2f\n", balance);
            }
            break;

        case 3:
            printf("Your current balance is ₹%.2f\n", balance);
            break;

        default:
            printf("Invalid choice! Please try again.\n");
    }

    printf("********** THANK YOU FOR BANKING WITH AXIS BANK **********");

    return 0;
}
