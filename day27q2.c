#include <stdio.h>

int main() {

    // Upper half
    for(int i = 1; i <= 7; i = i + 2) {

        for(int j = i; j < 7; j = j + 2) {
            printf(" ");
        }

        for(int j = 1; j <= i; j++) {
            printf("*");
        }

        printf("\n");
    }

    // Lower half
    for(int i = 5; i >= 1; i = i - 2) {

        for(int j = i; j < 7; j = j + 2) {
            printf(" ");
        }

        for(int j = 1; j <= i; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}