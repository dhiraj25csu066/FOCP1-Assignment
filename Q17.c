/*Design a C program to delete an element from the front, middle, or end of an array, and print 
the array before and after deletion.*/

#include <stdio.h>

int main() {
    int a[20], n, pos;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Position to delete (1 to %d): ", n);
    scanf("%d", &pos);

    for(int i = pos - 1; i < n - 1; i++) {
        a[i] = a[i + 1];
    }

    n--;

    printf("Array after deletion:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
