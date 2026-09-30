#include <stdio.h>

int main() {
    int n, search;
    int low, high, mid;
    int index = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter sorted array: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &search);

    low = 0;
    high = n - 1;

    while(low <= high) {

        mid = (low + high) / 2;

        if(a[mid] == search) {
            index = mid;
            break;
        }
        else if(search > a[mid]) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
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