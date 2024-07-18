#include <stdio.h>

// Function to calculate the Greatest Common Divisor (GCD) using Euclidean algorithm
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to calculate the Least Common Multiple (LCM)
void findLcm(int a, int b) {
    if (a == 0 || b == 0) {
        printf("LCM is not defined for zero.\n");
        return;
    }

    int lcm = (a * b) / gcd(a, b);
    printf("LCM of %d and %d is %d\n", a, b, lcm);
}

int main() {
    int a = 34;
    int b = 67;
    findLcm(a, b);

    return 0;
}
