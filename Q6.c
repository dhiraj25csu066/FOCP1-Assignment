/*Create a C program that allows the user to convert between Binary and Decimal systems based 
on their choice, showcasing understanding of data encoding and computer number systems used in 
hardware-level design.*/

#include <stdio.h>

int main() {
    int choice;
    int decimal, remainder, i = 1, binary = 0;
    int num, base = 1, rem, dec = 0;

    printf("1. Convert Binary to Decimal\n");
    printf("2. Convert Decimal to Binary\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    // Option 1: Binary → Decimal
    
    if (choice == 1) {
        printf("Enter a binary number: ");
        scanf("%d", &num);

        while (num != 0) {
            rem = num % 10;          // Get last digit
            dec = dec + rem * base;  // Multiply by 1,2,4,8...
            num = num / 10;
            base = base * 2;
        }

        printf("Decimal number = %d\n", dec);
    }
    // Option 2: Decimal → Binary

    else if (choice == 2) {
        printf("Enter a decimal number: ");
        scanf("%d", &decimal);

        while (decimal != 0) {
            remainder = decimal % 2;      // Find remainder (0 or 1)
            binary = binary + remainder * i;
            i = i * 10;
            decimal = decimal / 2;
        }

        printf("Binary number = %d\n", binary);
    }

    else {
        printf("Invalid choice!\n");
    }

    return 0;
}

