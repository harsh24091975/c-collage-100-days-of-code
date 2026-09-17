#include <stdio.h>

int main() {
    int n;
    float sum = 1.0;
    int numerator = 3, denominator = 4;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for(int i = 2; i <= n; i++) {

        sum = sum + (float)numerator / denominator;

        numerator = numerator + 2;
        denominator = denominator + 2;
    }

    printf("Sum = %f", sum);

    return 0;
}