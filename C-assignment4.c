#include <stdio.h>
#include <math.h>

// Function declarations
void helloWorld();

void add();
void sub();
void div();
void mod();
void multi();

void swap();
void even();
void marksheet();
void electricity();
void week();
void month();

void palindrome();
void vowel();
void armstrong();
void reverseNumber();
void sumOfDigits();
void countDigits();
void calculator();
void fibonacci();
void factorial();
void maxOfThree();

// Function definitions

// No return and no argument
void helloWorld() {
    printf("Hello, World!\n");
}

void add() {
    int a, b;
    printf("Enter two numbers to add: ");
    scanf("%d %d", &a, &b);
    printf("Sum: %d\n", a + b);
}

void sub() {
    int a, b;
    printf("Enter two numbers to subtract: ");
    scanf("%d %d", &a, &b);
    printf("Difference: %d\n", a - b);
}

void div() {
    int a, b;
    printf("Enter two numbers to divide: ");
    scanf("%d %d", &a, &b);
    if (b != 0) {
        printf("Quotient: %d\n", a / b);
    } else {
        printf("Division by zero is not allowed.\n");
    }
}

void mod() {
    int a, b;
    printf("Enter two numbers to find the modulus: ");
    scanf("%d %d", &a, &b);
    if (b != 0) {
        printf("Modulus: %d\n", a % b);
    } else {
        printf("Division by zero is not allowed.\n");
    }
}

void multi() {
    int a, b;
    printf("Enter two numbers to multiply: ");
    scanf("%d %d", &a, &b);
    printf("Product: %d\n", a * b);
}

void swap() {
    int a, b, temp;
    printf("Enter two numbers to swap: ");
    scanf("%d %d", &a, &b);
    temp = a;
    a = b;
    b = temp;
    printf("Swapped numbers: %d %d\n", a, b);
}

void even() {
    int num;
    printf("Enter a number to check even or odd: ");
    scanf("%d", &num);
    if (num % 2 == 0) {
        printf("%d is even.\n", num);
    } else {
        printf("%d is odd.\n", num);
    }
}

void marksheet() {
    int rollNo, marks1, marks2, marks3, total;
    float percentage;
    char name[50], fname[50], mname[50], address[100], contact[15];
    
    printf("Enter Roll Number: ");
    scanf("%d", &rollNo);
    printf("Enter Name: ");
    scanf("%s", name);
    printf("Enter Father's Name: ");
    scanf("%s", fname);
    printf("Enter Mother's Name: ");
    scanf("%s", mname);
    printf("Enter Address: ");
    scanf("%s", address);
    printf("Enter Contact: ");
    scanf("%s", contact);
    printf("Enter marks of Physics, Chemistry and Computer Application: ");
    scanf("%d %d %d", &marks1, &marks2, &marks3);

    total = marks1 + marks2 + marks3;
    percentage = total / 3.0;

    printf("Total: %d\n", total);
    printf("Percentage: %.2f%%\n", percentage);
    if (percentage >= 60) {
        printf("Division: First\n");
    } else if (percentage >= 50) {
        printf("Division: Second\n");
    } else if (percentage >= 40) {
        printf("Division: Third\n");
    } else {
        printf("Division: Fail\n");
    }
}

void electricity() {
    int units;
    float amount, totalAmount, discount;
    
    printf("Enter electricity units consumed: ");
    scanf("%d", &units);

    if (units <= 10) {
        discount = 0.10;
    } else if (units <= 20) {
        discount = 0.15;
    } else if (units <= 40) {
        discount = 0.30;
    } else {
        discount = 0.50;
    }

    amount = units * 40;
    totalAmount = amount - (amount * discount);

    printf("Electricity bill amount: %.2f\n", amount);
    printf("Discount: %.2f%%\n", discount * 100);
    printf("Total payable amount: %.2f\n", totalAmount);
}

void week() {
    int day;
    printf("Enter a day number (1-7): ");
    scanf("%d", &day);
    switch (day) {
        case 1: printf("Sunday\n"); break;
        case 2: printf("Monday\n"); break;
        case 3: printf("Tuesday\n"); break;
        case 4: printf("Wednesday\n"); break;
        case 5: printf("Thursday\n"); break;
        case 6: printf("Friday\n"); break;
        case 7: printf("Saturday\n"); break;
        default: printf("Invalid day\n"); break;
    }
}

void month() {
    int month;
    printf("Enter a month number (1-12): ");
    scanf("%d", &month);
    switch (month) {
        case 1: printf("January\n"); break;
        case 2: printf("February\n"); break;
        case 3: printf("March\n"); break;
        case 4: printf("April\n"); break;
        case 5: printf("May\n"); break;
        case 6: printf("June\n"); break;
        case 7: printf("July\n"); break;
        case 8: printf("August\n"); break;
        case 9: printf("September\n"); break;
        case 10: printf("October\n"); break;
        case 11: printf("November\n"); break;
        case 12: printf("December\n"); break;
        default: printf("Invalid month\n"); break;
    }
}

void palindrome() {
    int num, reversed = 0, remainder, original;
    printf("Enter a number to check palindrome: ");
    scanf("%d", &num);
    original = num;

    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    if (original == reversed) {
        printf("%d is a palindrome.\n", original);
    } else {
        printf("%d is not a palindrome.\n", original);
    }
}

void vowel() {
    char ch;
    printf("Enter a character to check vowel: ");
    scanf(" %c", &ch);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("%c is a vowel.\n", ch);
    } else {
        printf("%c is not a vowel.\n", ch);
    }
}

void armstrong() {
    int num, original, remainder, result = 0;
    printf("Enter a number to check Armstrong: ");
    scanf("%d", &num);
    original = num;

    while (original != 0) {
        remainder = original % 10;
        result += remainder * remainder * remainder;
        original /= 10;
    }

    if (result == num) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }
}

void reverseNumber() {
    int num, reversed = 0, remainder;
    printf("Enter a number to reverse: ");
    scanf("%d", &num);

    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    printf("Reversed number: %d\n", reversed);
}

void sumOfDigits() {
    int num, sum = 0, remainder;
    printf("Enter a number to find the sum of digits: ");
    scanf("%d", &num);

    while (num != 0) {
        remainder = num % 10;
        sum += remainder;
        num /= 10;
    }

    printf("Sum of digits: %d\n", sum);
}

void countDigits() {
    int num, count = 0;
    printf("Enter a number to count its digits: ");
    scanf("%d", &num);

    while (num != 0) {
        num /= 10;
        count++;
    }

    printf("Number of digits: %d\n", count);
}

void calculator() {
    char op;
    float num1, num2;
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op);
    printf("Enter two operands: ");
    scanf("%f %f", &num1, &num2);

    switch (op) {
        case '+': printf("%.1f + %.1f = %.1f\n", num1, num2, num1 + num2); break;
        case '-': printf("%.1f - %.1f = %.1f\n", num1, num2, num1 - num2); break;
        case '*': printf("%.1f * %.1f = %.1f\n", num1, num2, num1 * num2); break;
        case '/': 
            if (num2 != 0) {
                printf("%.1f / %.1f = %.1f\n", num1, num2, num1 / num2);
            } else {
                printf("Division by zero is not allowed.\n");
            }
            break;
        default: printf("Invalid operator\n"); break;
    }
}

void fibonacci() {
    int n, t1 = 0, t2 = 1, nextTerm;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");
    for (int i = 1; i <= n; i++) {
        printf("%d ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    printf("\n");
}

void factorial() {
    int n, i;
    unsigned long long fact = 1;
    printf("Enter an integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial of negative number doesn't exist.\n");
    } else {
        for (i = 1; i <= n; ++i) {
            fact *= i;
        }
        printf("Factorial of %d = %llu\n", n, fact);
    }
}

void maxOfThree() {
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c) {
        printf("Maximum number: %d\n", a);
    } else if (b >= a && b >= c) {
        printf("Maximum number: %d\n", b);
    } else {
        printf("Maximum number: %d\n", c);
    }
}

int main() {
    // Call functions here as required
    helloWorld();
    add();
    sub();
    div();
    mod();
    multi();
    swap();
    even();
    marksheet();
    electricity();
    week();
    month();
    palindrome();
    vowel();
    armstrong();
    reverseNumber();
    sumOfDigits();
    countDigits();
    calculator();
    fibonacci();
    factorial();
    maxOfThree();

    return 0;
}
