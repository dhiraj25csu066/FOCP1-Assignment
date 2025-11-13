/*Develop a C program to print a binary pyramid pattern. 
0        0 
01      01 
010    010  
0101  0101 
0101001010 */

#include <stdio.h>

int main() {
    int i, j, rows;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        
        for (j = 1; j <= i; j++) {
            printf("%d", j % 2); 
        }

        for (j = 1; j <= (rows - i) * 2; j++) {
            printf(" ");
        }

        for (j = 1; j <= i; j++) {
            printf("%d", j % 2);
        }

        printf("\n");
    }

    return 0;
}
