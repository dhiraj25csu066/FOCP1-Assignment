/* Implement a C program to swap two numbers using four different methods, demonstrating 
diverse approaches such as arithmetic, bitwise XOR, pointer manipulation, and temporary variable 
usage — a key skill in memory and variable management.*/

#include <stdio.h>

int main() {
    int a, b, temp;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("\nOriginal values: a = %d, b = %d\n", a, b);

    
    //  Method 1: Using a Temporary Variable
    
    temp = a;
    a = b;
    b = temp;
    printf("After swapping (using temp): a = %d, b = %d\n", a, b);

    printf("\nEnter two numbers again: ");
    scanf("%d %d", &a, &b);

    //  Method 2: Using Arithmetic (+ and -)
    
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swapping (using + and -): a = %d, b = %d\n", a, b);

    printf("\nEnter two numbers again: ");  // Reset values for next method
    scanf("%d %d", &a, &b);

    //  Method 3: Using Bitwise XOR (^)
    
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("After swapping (using XOR): a = %d, b = %d\n", a, b);

    printf("\nEnter two numbers again: ");   // Reset values for next method
    scanf("%d %d", &a, &b);

    // Method 4: Using Pointers

    int *p1 = &a, *p2 = &b;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
    printf("After swapping (using pointers): a = %d, b = %d\n", a, b);

    return 0;
}
