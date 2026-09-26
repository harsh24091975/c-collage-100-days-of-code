#include <stdio.h>

int main() {
    int n, even = 0, odd = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n];

    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for(int i = 0; i < n; i++) {

        if(a[i] % 2 == 0) {
            even++;
        }
        else {
            odd++;
        }
    }

    printf("Even=%d, Odd=%d", even, odd);

    return 0;
}