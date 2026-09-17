#include <stdio.h>

int main() {
    int n, original, remainder, sum = 0;

    printf("Enter number: ");
    scanf("%d", &n);

    original = n;

    while(n > 0) {

        remainder = n % 10;

        int factorial = 1;

        for(int i = 1; i <= remainder; i++) {
            factorial = factorial * i;
        }

        sum = sum + factorial;

        n = n / 10;
    }

    if(sum == original) {
        printf("Strong number");
    }
    else {
        printf("Not a strong number");
    }

    return 0;
}