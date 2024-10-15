#include <stdio.h>

int main() {
    int number, reversedNumber = 0, originalNumber, remainder;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number < 10 && number > -10) {
        printf("sorry bro\n");
    } else {
        originalNumber = number;

        // Reverse the number
        while (number != 0) {
            remainder = number % 10;
            reversedNumber = reversedNumber * 10 + remainder;
            number /= 10;
        }

        printf("Reversed number: %d\n", reversedNumber);
    }

    return 0;
}
