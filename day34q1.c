#include <stdio.h>

int main() {
    int n, element, pos;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n + 1];

    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter element: ");
    scanf("%d", &element);

    printf("Enter position: ");
    scanf("%d", &pos);

    if(pos < 1 || pos > n + 1) {
        printf("Invalid position");
        return 0;
    }

    for(int i = n; i >= pos; i--) {
        a[i] = a[i - 1];
    }

    a[pos - 1] = element;

    n++;

    for(int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}