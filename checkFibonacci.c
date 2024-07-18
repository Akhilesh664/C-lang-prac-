#include <stdio.h>
#include <math.h>

// Function to check if a number is a perfect square
int isPerfectSquare(int num) {
    int s = (int)sqrt(num);
    return (s * s == num);
}

// Function to check if a number is a Fibonacci number
int isFibonacci(int n) {
    // n is a Fibonacci number if and only if one or both of (5*n*n + 4) or (5*n*n - 4) is a perfect square
    return isPerfectSquare(5 * n * n + 4) || isPerfectSquare(5 * n * n - 4);
}

int main() {
    int x = 8;

    if (isFibonacci(x)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}