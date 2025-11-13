/*Construct a C program to find the HCF (Highest Common Factor) of two integers using 
iterative or recursive logic — a core operation in optimisation algorithms and cryptographic 
computations.*/

#include <stdio.h>

int main() {
    int a, b, hcf;
    
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    int min = (a < b) ? a:b;
    for(int i = 1; i <= min; i++) {
        if(a % i == 0 && b % i == 0) {
            hcf = i;
        }
    }
    
    printf("HCF of %d and %d is: %d\n", a, b, hcf);
    return 0;
}
