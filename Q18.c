/*Develop a program to identify and print duplicate elements in an array, or print “-1” if no 
duplicates exist, applying frequency detection and data validation.*/

#include <stdio.h>

int main() {
    int a[20], n;
    int found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Duplicate elements:\n");

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(a[i] == a[j]) {
                printf("%d ", a[i]);
                found = 1;
                break;   
            }
        }
    }

    if(found == 0) {
        printf("-1");
    }

    return 0;
}
