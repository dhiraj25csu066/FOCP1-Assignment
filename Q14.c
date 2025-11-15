//  Develop a C program to count the number of prime numbers in an array.  

#include <stdio.h>

int isPrime(int n) {
    if (n <= 1) {
        return 0;    
    }

    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            return 0;   
        }
    }

    return 1;   
}

int main() {
    int arr[20], n, count = 0;

    printf("How many numbers do you want to enter? ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        if (isPrime(arr[i])) {
            count++;
        }
    }

    printf("Total prime numbers in the array = %d\n", count);

    return 0;
}
