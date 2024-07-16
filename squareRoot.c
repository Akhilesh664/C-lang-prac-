#include <stdio.h>
#include <math.h>

int main() {
    int x = 3; // Change this value to test with different numbers
    int i = 0;
    int found = 0; // Flag to check if a perfect square root is found

    while (i * i <= x) {
        if (x == i * i) {
            printf("Square root of %d is %d\n", x, i);
            found = 1;
            break;
        }
        i++;
    }

    if (!found) {
        double result = sqrt(x);
        printf("%d is not a perfect square. Square root is %.2f\n", x, result);
    }

    return 0;
}
