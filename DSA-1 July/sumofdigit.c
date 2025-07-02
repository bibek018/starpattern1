// 3) Enter any element and then find the summation of cubic of each digit.
#include <stdio.h>

int main() {

    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int sum = 0;
    while(num>0){
        int digit=num%10;
        sum=sum+digit*digit*digit; 
        num=num/10;
    }
    printf("Sum of cubes of digits: %d\n", sum);
    
    return 0;
}