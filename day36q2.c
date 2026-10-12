#include <stdio.h>

int main() {
    int r, c, sum = 0;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    int a[r][c];

    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            sum = sum + a[i][j];
        }
    }

    printf("Sum = %d", sum);

    return 0;
}