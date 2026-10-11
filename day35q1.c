#include <stdio.h>
#include <limits.h>

int main() {
    int n, max, second = INT_MIN, found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if(n < 2) {
        printf("Second largest does not exist");
        return 0;
    }

    int a[n];

    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    max = a[0];

    for(int i = 1; i < n; i++) {
        if(a[i] > max) {
            max = a[i];
        }
    }

    for(int i = 0; i < n; i++) {
        if(a[i] < max && (!found || a[i] > second)) {
            second = a[i];
            found = 1;
        }
    }

    if(found) {
        printf("Second largest = %d", second);
    }
    else {
        printf("Second largest does not exist");
    }

    return 0;
}
