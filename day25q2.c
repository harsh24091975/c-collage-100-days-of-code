#include <stdio.h>

int main() {

    for(int i = 1; i <= 5; i++) {

        // Print spaces
        for(int j = 1; j < i; j++) {
            printf(" ");
        }

        // Print stars
        for(int j = i; j <= 5; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}