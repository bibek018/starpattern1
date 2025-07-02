// 2) Enter any element and then find the reverse of that element(2356,reverse:6532)
#include <stdio.h>

int main() {

    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int reversed = 0;
    while (num > 0) {
        int digit = num % 10; 
        reversed = reversed * 10 + digit; 
        num /= 10; 
    }
    printf("Reversed number: %d\n", reversed);
    return 0;
}