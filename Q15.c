/*Write a C program to cyclically rotate the array clockwise by one position, applying array 
transformation logic used in scheduling and encryption. 
Input: arr[] = {1, 2, 3, 4, 5}  
Output: arr[] = {5, 1, 2, 3, 4} 
Input: arr[] = {2, 3, 4, 5, 1} 
Output: {1, 2, 3, 4, 5}*/

#include <stdio.h>

int main() {
    int a[20];
    int n, last;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    last = a[n - 1];

    for(int i = n - 1; i > 0; i--) {
        a[i] = a[i - 1];
    }
    a[0] = last;

    printf("After rotating clockwise:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
