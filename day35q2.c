#include <stdio.h>

int main() {
    int n, k, temp;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if(n <= 0) {
        return 0;
    }

    int a[n];

    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter k: ");
    scanf("%d", &k);

    k = k % n;

    for(int i = 1; i <= k; i++) {
        temp = a[n - 1];

        for(int j = n - 1; j > 0; j--) {
            a[j] = a[j - 1];
        }

        a[0] = temp;
    }

    for(int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}