#include <stdio.h>

void pattern1() {
    int n = 5;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

void pattern2() {
    int n = 5;
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

void pattern3() {
    int n = 5;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

void pattern4() {
    int n = 5;
    for (int i = n; i >= 1; i--) {
        for (int j = n; j > i; j--) {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

void pattern5() {
    int n = 5;
    for (int i = 1; i <= n; i++) {
        for (int j = n - 1; j >= i; j--) {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    for (int i = n - 1; i >= 1; i--) {
        for (int j = n - 1; j >= i; j--) {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

void pattern6() {
    int n = 5;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
}

void pattern7() {
    int n = 5;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d", i);
        }
        printf("\n");
    }
}

void pattern8() {
    int n = 5;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d", i % 2);
        }
        printf("\n");
    }
}

void pattern9() {
    int n = 5;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d", j % 2);
        }
        printf("\n");
    }
}

void pattern10() {
    int num = 1;
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }
}

void pattern11() {
    int num = 1;
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", num * num);
            num++;
        }
        printf("\n");
    }
}

void pattern12() {
    int n = 4;
    for (int i = 1; i <= n; i++) {
        for (int s = n - 1; s >= i; s--) {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

void pattern13() {
    int n = 5;
    for (int i = n; i >= 1; i--) {
        for (int s = n; s > i; s--) {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

void pattern14() {
    int n = 5;
    for (int i = 1; i <= n; i++) {
        for (int s = n - 1; s >= i; s--) {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    for (int i = n - 1; i >= 1; i--) {
        for (int s = n - 1; s >= i; s--) {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

void pattern15() {
    int n = 4;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == 1 || i == n || j == 1 || j == n) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

void pattern16() {
    int n = 4;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

void pattern17() {
    int n = 4;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            printf("*");
        }
        printf("\n");
    }
}

void pattern18() {
    int n = 4;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            printf("%d", i);
        }
        printf("\n");
    }
}

void pattern19() {
    int n = 5;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
}

void pattern20() {
    int n = 5;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            printf("%d", (i + j) % 2);
        }
        printf("\n");
    }
}

int main() {
    printf("Pattern 1:\n");
    pattern1();
    printf("\nPattern 2:\n");
    pattern2();
    printf("\nPattern 3:\n");
    pattern3();
    printf("\nPattern 4:\n");
    pattern4();
    printf("\nPattern 5:\n");
    pattern5();
    printf("\nPattern 6:\n");
    pattern6();
    printf("\nPattern 7:\n");
    pattern7();
    printf("\nPattern 8:\n");
    pattern8();
    printf("\nPattern 9:\n");
    pattern9();
    printf("\nPattern 10:\n");
    pattern10();
    printf("\nPattern 11:\n");
    pattern11();
    printf("\nPattern 12:\n");
    pattern12();
    printf("\nPattern 13:\n");
    pattern13();
    printf("\nPattern 14:\n");
    pattern14();
    printf("\nPattern 15:\n");
    pattern15();
    printf("\nPattern 16:\n");
    pattern16();
    printf("\nPattern 17:\n");
    pattern17();
    printf("\nPattern 18:\n");
    pattern18();
    printf("\nPattern 19:\n");
    pattern19();
    printf("\nPattern 20:\n");
    pattern20();
    
    return 0;
}
