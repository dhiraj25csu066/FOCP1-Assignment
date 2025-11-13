/*Implement a program to find who and how many students scored “99” in the marks array, 
emphasising data scanning and frequency counting.*/

#include <stdio.h>

int main() {
    int marks[10];
    int n, i, count = 0;

    printf("Enter number of students: ");
    scanf("%d", &n);
    printf("Enter marks of %d students:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &marks[i]);
    }
    printf("\nStudents who scored 99 are at positions: ");
    for (i = 0; i < n; i++) {
        if (marks[i] == 99) {
            printf("%d ", i + 1);  
            count++;
        }
    }

    if (count > 0) {
        printf("\nTotal students who scored 99 = %d\n", count);
    } else {
        printf("\nNo student scored 99.\n");
    }

    return 0;
}
