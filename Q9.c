/* Design a C program to find the first occurrence of the score “99” in an array, focusing on linear 
search and data retrieval techniques.*/

#include <stdio.h>

int main() {
    int scores[10];
    int i, n, found = 0;

    printf("Enter number of scores: ");
    scanf("%d", &n);
    printf("Enter %d scores:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &scores[i]);
    }
    for(i = 0; i < n; i++) {
        if(scores[i] == 99) {
            printf("First occurrence of 99 is at position %d\n", i + 1);
            found = 1;
            break;  
        }
    }
    if(!found) {
        printf("Score 99 not found in the list.\n");
    }

    return 0;
}
