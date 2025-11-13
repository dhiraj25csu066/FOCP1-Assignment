// Design a C program to find a peak element that is not smaller than its neighbours. 

#include <stdio.h>

int main() {
    int arr[20];
    int n, i;

    printf("Enter how many numbers you want to enter: ");
    scanf("%d", &n);

    printf("Enter the numbers:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < n; i++) {
        if(i == 0 && arr[i] >= arr[i + 1]) {
            printf("\nPeak element is %d at position %d\n", arr[i], i + 1);
            break;
        }
        else if(i == n - 1 && arr[i] >= arr[i - 1]) {
            printf("\nPeak element is %d at position %d\n", arr[i], i + 1);
            break;
        }
        else if(arr[i] >= arr[i - 1] && arr[i] >= arr[i + 1]) {
            printf("\nPeak element is %d at position %d\n", arr[i], i + 1);
            break;
        }
    }
    if(i == n) {
        printf("\nNo peak element found.\n");
    }

    return 0;
}
