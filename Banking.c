#include <stdio.h>

// Function prototypes
void showMenu();

void createAccount();

void depositFunds();
void withdrawFunds();
void checkBalance();

// Global variables
int accountCount = 0;
double accounts[10] = {0};

int main() {
    int choice;
    do {
        showMenu();
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                createAccount();
                break;
            case 2:
                depositFunds();
                break;
            case 3:
                withdrawFunds();
                break;
            case 4:
                checkBalance();
                break;
            case 5:
                printf("Exiting program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 5);

    return 0;
}

void showMenu() {
    printf("\n--- Banking System Menu ---\n");
    printf("1. Create Account\n");
    printf("2. Deposit Funds\n");
    printf("3. Withdraw Funds\n");
    printf("4. Check Balance\n");
    printf("5. Exit\n");
}

void createAccount() {
    if (accountCount >= 10) {
        printf("Maximum account limit reached.\n");
        return;
    }

    double initialDeposit;
    printf("Enter initial deposit amount: ");
    scanf("%lf", &initialDeposit);

    if (initialDeposit < 0) {
        printf("Invalid initial deposit amount.\n");
        return;
    }

    accounts[accountCount++] = initialDeposit;
    printf("Account created successfully. Account number: %d\n", accountCount);
}

void depositFunds() {
    int accountNumber;
    double amount;
    printf("Enter account number: ");
    scanf("%d", &accountNumber);

    if (accountNumber <= 0 || accountNumber > accountCount) {
        printf("Invalid account number.\n");
        return;
    }

    printf("Enter amount to deposit: ");
    scanf("%lf", &amount);

    if (amount <= 0) {
        printf("Invalid deposit amount.\n");
        return;
    }

    accounts[accountNumber - 1] += amount;
    printf("Deposit successful. New balance: %.2lf\n", accounts[accountNumber - 1]);
}

void withdrawFunds() {
    int accountNumber;
    double amount;
    printf("Enter account number: ");
    scanf("%d", &accountNumber);

    if (accountNumber <= 0 || accountNumber > accountCount) {
        printf("Invalid account number.\n");
        return;
    }

    printf("Enter amount to withdraw: ");
    scanf("%lf", &amount);

    if (amount <= 0 || amount > accounts[accountNumber - 1]) {
        printf("Invalid withdrawal amount.\n");
        return;
    }

    accounts[accountNumber - 1] -= amount;
    printf("Withdrawal successful. New balance: %.2lf\n", accounts[accountNumber - 1]);
}

void checkBalance() {
    int accountNumber;
    printf("Enter account number: ");
    scanf("%d", &accountNumber);

    if (accountNumber <= 0 || accountNumber > accountCount) {
        printf("Invalid account number.\n");
        return;
    }

   
