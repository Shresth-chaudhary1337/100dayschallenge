// Q41: Write a program to swap the first and last digit of a number.
#include <stdio.h>

int main() {
    int n, num, first, last, digits = 0;

    printf("Enter number\n");
    scanf("%d", &n);

    num = n;
    last = num % 10;       // Extracting last digit

    // Find first digit and number of digits
    while (num > 0) {
        first = num;       // When loop ends first will be the first digit
        num = num / 10;
        digits++;
    }
    int power = 1;
    for (int i = 1; i < digits; i++) {
        power *= 10;       
    }

    int swap = (last * power)          // put last at first place
             + (n % power)             // keep the middle part
             - last                    // remove old last
             + first;                  // add first at end

    printf("Swapped number is = %d\n", swap);

    return 0;
}
