#include <stdio.h>
#include <stdbool.h>

int main() {
    int a;
    bool isPrime = true;
    printf("Enter a number: ");
    scanf("%d", &a);

    if (a <= 1) {
        printf("It is not a prime number\n");
    } else if (a == 2) {
        printf("It is a prime number\n");
    } else {
        for (int i = 2; i * i <= a; i++) {
            if (a % i == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            printf("It is a prime number\n");
        } else {
            printf("It is not a prime number\n");
        }
    }
    return 0;
}

