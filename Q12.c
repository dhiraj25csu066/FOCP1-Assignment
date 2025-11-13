/*Develop a C program to find the maximum and minimum scores in an array, applying 
comparative logic for ranking and analysis.*/

#include <stdio.h>

int main() {
    int marks[20];
    int n, i;
    int max, min;

    printf("How many scores do you want to enter? ");
    scanf("%d", &n);

    printf("Enter the scores:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &marks[i]);
    }

    // take first number as max and min
    max = marks[0];
    min = marks[0];

    for(i = 1; i < n; i++) {
        if(marks[i] > max) {
            max = marks[i];
        }
        if(marks[i] < min) {
            min = marks[i];
        }
    }

    printf("\nThe highest score is %d", max);
    printf("\nThe lowest score is %d\n", min);

    return 0;
}

