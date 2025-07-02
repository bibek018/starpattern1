// 4) Enter 5 elements in an array and then count how many odd elements are present in the given array.
#include <stdio.h>

int main() {
    int arr[5];
    int count = 0;
    printf("Enter 5 elements:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 5; i++) {
        if (arr[i] % 2 != 0) {
            count++;
        }
    }
    printf("Number of odd elements: %d\n", count);
    return 0;
}