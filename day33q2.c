#include <stdio.h>

int main() {
    int n, element, pos;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n + 1];

    printf("Enter sorted array: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter element to insert: ");
    scanf("%d", &element);

    // Find appropriate position
    pos = 0;

    while(pos < n && a[pos] < element) {
        pos++;
    }

    for(int i = n; i > pos; i--) {
        a[i] = a[i - 1];
    }

    a[pos] = element;

    n++;

    
    for(int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}