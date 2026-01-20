/*
Name: Pratyush Kumar Sio
ID  : B325029
This Code checks a neon number.
*/
#include <stdio.h>
int main() {
    int num, square, sum = 0, temp;

    printf("Enter a number: ");
    scanf("%d", &num);

    square = num * num;
    temp = square;

    while (temp > 0) {
        sum += temp % 10;
        temp /= 10;
    }

    if (sum == num) {
        printf("%d is a neon number.\n", num);
    } else {
        printf("%d is not a neon number.\n", num);
    }

    return 0;
}