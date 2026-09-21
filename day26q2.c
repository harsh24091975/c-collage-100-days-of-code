#include <stdio.h>

int main() {

    for(int i = 1; i <= 5; i = i + 2) {
        for(int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    for(int i = 3; i >= 1; i = i - 2) {
        for(int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}