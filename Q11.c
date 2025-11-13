/* Develop a C program to traverse an array of scores, determine whether each score is even or 
odd using conditional logic, and store them into two separate arrays — even_array and odd_array.*/

#include <stdio.h>

int main() {
    int scores[10], even_array[10], odd_array[10];
    int n, i, even_count = 0, odd_count = 0;

    printf("Enter how many scores you want to check: ");
    scanf("%d", &n);

    printf("Enter the scores:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &scores[i]);
    }

    // Check each score and put it in even or odd array
    for (i = 0; i < n; i++) {
        if (scores[i] % 2 == 0) {
            even_array[even_count] = scores[i];
            even_count++;
        } else {
            odd_array[odd_count] = scores[i];
            odd_count++;
        }
    }

    printf("\nEven scores are: ");
    for (i = 0; i < even_count; i++) {
        printf("%d ", even_array[i]);
    }

    printf("\nOdd scores are: ");
    for (i = 0; i < odd_count; i++) {
        printf("%d ", odd_array[i]);
    }

    printf("\n");

    return 0;
}
