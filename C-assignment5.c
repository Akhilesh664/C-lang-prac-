#include <stdio.h>

void printHollowSquare(int n) {
    printf("Hollow Square Pattern:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if(i==0 || j==0 || i==n-1 || j==n-1){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("\n");
}

void printModifiedPattern1(int n) {
    printf("Modified Pattern 1:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if(i==0 || j==0 || j==n-1){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("\n");
}

void printModifiedPattern2(int n) {
    printf("Modified Pattern 2:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if(i==0 || j==0 || i==2 || j==n-1){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("\n");
}

void printDiagonalPattern(int n) {
    printf("Diagonal Pattern:\n");
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < n - i; j++) {
            printf("  "); // Print blank space
        }
        printf("*\n"); // Print Star and newline
    }
    printf("\n");
}

void printMirrorDiagonalPattern(int n) {
    printf("Mirror Diagonal Pattern:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || j == 0 || i == n - 1 || j == n - 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("\n");
}

void printRightAngleHollowTriangle(int n) {
    printf("Right Angle Hollow Triangle Pattern:\n");
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            if (i == n || j == 1 || j == i) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("\n");
}

void printXShapePattern(int n) {
    printf("X Shape Pattern:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j == i || j == (n - 1 - i)) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("\n");
}

void printComplexXShapePattern(int n) {
    printf("Complex X Shape Pattern:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || i == n-1 || j == 0 || j == n-1 || j == i || j == (n - 1 - i)) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("\n");
}

void printCustomPattern(int n) {
    printf("Custom Pattern:\n");
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == 1 || i == n || j == 1 || j == n) {
                printf("* ");
            } else {
                printf("%d ", i);
            }
        }
        printf("\n");
    }
    printf("\n");
}

int main() {
    int n = 5;
    printHollowSquare(n);
    printModifiedPattern1(n);
    printModifiedPattern2(n);
    printDiagonalPattern(n);
    printMirrorDiagonalPattern(n);
    printRightAngleHollowTriangle(n);
    printXShapePattern(n);
    printComplexXShapePattern(n);
    printCustomPattern(n);

    return 0;
}
