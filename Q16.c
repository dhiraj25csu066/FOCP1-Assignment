/*Implement a C program to insert an element at the front, middle, or end of an array, and print 
the array before and after insertion.*/

#include <stdio.h>

int main() {
    int a[30];
    int n, pos, value;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter the array:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter position to insert (1 to %d): ", n+1);
    scanf("%d", &pos);

    printf("Enter value: ");
    scanf("%d", &value);

    /* shift elements to right */
    for(int i = n; i >= pos; i--) {
        a[i] = a[i - 1];
    }

    /* put value at that place */
    a[pos - 1] = value;
    n++;

    printf("Array after insertion:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
