#include <stdio.h>

int main() {
    int n, search, index = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n];

    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &search);

    for(int i = 0; i < n; i++) {
        if(a[i] == search) {
            index = i;
            break;
        }
    }

    if(index == -1) {
        printf("-1");
    }
    else {
        printf("Found at index %d", index);
    }

    return 0;
}