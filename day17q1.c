#include <stdio.h>

int main() {
    int n, original, remainder, sum = 0;

    printf("Enter number: ");
    scanf("%d", &n);

    original = n;

    while(n > 0) {
        remainder = n % 10;
        sum = sum + remainder * remainder * remainder;
        n = n / 10;
    }

    if(original == sum) {
        printf("Armstrong number");
    }
    else {
        printf("Not Armstrong number");
    }

    return 0;
}