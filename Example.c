#include <stdio.h>

// Function to calculate the factorial of a number

int factorial(int n) {
  
    int result = 1;
  
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

// Function to check if a number is prime

int isPrime(int num) {
  
    if (num <= 1) {
      
        return 0;
    }
    for (int i = 2; i <= num / 2; i++) {
      
        if (num % i == 0) {
          
            return 0;
        }
    }
    return 1;
}

int main() {
    int choice, num, i;

    printf("1. Calculate factorial\n");
  
    printf("2. Check if a number is prime\n");
  
    printf("Enter your choice: ");
  
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter a number: ");
        
            scanf("%d", &num);
        
            printf("Factorial of %d is: %d\n", num, factorial(num));
            break;
        
        case 2:
        
            printf("Enter a number: ");
        
            scanf("%d", &num);
        
            if (isPrime(num)) {
              
                printf("%d is a prime number.\n", num);
            } else {
              
                printf("%d is not a prime number.\n", num);
            }
            break;
        
        default:
        
            printf("Invalid choice.\n");
        
            break;
        
    }

    printf("Printing numbers from 1 to 10 using a loop:\n");
  
    for (i = 1; i <= 10; i++) {
      
        printf("%d ", i);
    }
    printf("\n");
  

    printf("Printing even numbers from 1 to 20 using a loop:\n");
  
    i = 1;
  
    while (i <= 20) {
      
        if (i % 2 == 0) {
          
            printf("%d ", i);
        }
        i++;
    }
    printf("\n");

    printf("Printing numbers from 10 to 1 using a loop:\n");
    i = 10;
    do {
        printf("%d ", i);
        i--;
    } while (i >= 1);
    printf("\n");

    return 0;
}
