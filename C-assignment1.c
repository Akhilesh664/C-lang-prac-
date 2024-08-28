#include <stdio.h>

// Function prototypes
void checkVowelOrConsonant(char ch);
void checkPeakWord(char ch);
void checkUpperLine(char ch);
void checkMidLine(char ch);
void checkLowerLine(char ch);
void checkRange1to5(int num);
void checkRange11to20(int num);
void checkRange23to56(int num);
void checkMarksGreaterThan36(float marks[], int count);
void checkMarksGreaterThan33(float marks[], int count);
void checkEligibilityForJEE(float percentage);
void convertTemperature();

void checkShape(float a, float b, float c);

int main() {
    char inputChar;
    int num;
    float marks[5];
    float percentage;

    // 1. Check vowel or consonant
    printf("Enter a character: ");
    scanf(" %c", &inputChar);
    checkVowelOrConsonant(inputChar);

    // 2. Peak word check
    printf("Enter a character for peak word check: ");
    scanf(" %c", &inputChar);
    checkPeakWord(inputChar);

    // 3. Upper line check
    printf("Enter a character for upper line check: ");
    scanf(" %c", &inputChar);
    checkUpperLine(inputChar);

    // 4. Mid line check
    printf("Enter a character for mid line check: ");
    scanf(" %c", &inputChar);
    checkMidLine(inputChar);

    // 5. Lower line check
    printf("Enter a character for lower line check: ");
    scanf(" %c", &inputChar);
    checkLowerLine(inputChar);

    // 6. Check range 1 to 5
    printf("Enter a number between 1 and 5: ");
    scanf("%d", &num);
    checkRange1to5(num);

    // 7. Check range 11 to 20
    printf("Enter a number between 11 and 20: ");
    scanf("%d", &num);
    checkRange11to20(num);

    // 8. Check range 23 to 56
    printf("Enter a number between 23 and 56: ");
    scanf("%d", &num);
    checkRange23to56(num);

    // 9. Check marks greater than 36 and calculate average
    printf("Enter marks for five subjects: ");
    for (int i = 0; i < 5; i++) {
        scanf("%f", &marks[i]);
    }
    checkMarksGreaterThan36(marks, 5);

    // 10. Check marks greater than 33 and calculate percentage
    printf("Enter marks for five subjects: ");
    for (int i = 0; i < 5; i++) {
        scanf("%f", &marks[i]);
    }
    checkMarksGreaterThan33(marks, 5);

    // 11. Check percentage for JEE eligibility
    printf("Enter percentage: ");
    scanf("%f", &percentage);
    checkEligibilityForJEE(percentage);

    // Convert temperature
    convertTemperature();

    // Check shapes
    float a, b, c;
    printf("Enter three dimensions for shape check (0 for unused dimensions): ");
    scanf("%f %f %f", &a, &b, &c);
    checkShape(a, b, c);

    return 0;
}

// 1. Check vowel or consonant
void checkVowelOrConsonant(char ch) {
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("%c is a vowel\n", ch);
    } else {
        printf("%c is a consonant\n", ch);
    }
}

// 2. Peak word check
void checkPeakWord(char ch) {
    if (ch == 'p' || ch == 'e' || ch == 'a' || ch == 'k') {
        printf("This is a peak word\n");
    } else {
        printf("Input mismatch\n");
    }
}

// 3. Upper line check
void checkUpperLine(char ch) {
    if (ch == 'q' || ch == 'w' || ch == 'e' || ch == 'r' || ch == 't' || ch == 'y' ||
        ch == 'u' || ch == 'i' || ch == 'o' || ch == 'p') {
        printf("Upper line\n");
    } else {
        printf("Input mismatch\n");
    }
}

// 4. Mid line check
void checkMidLine(char ch) {
    if (ch == 'a' || ch == 's' || ch == 'd' || ch == 'f' || ch == 'g' || ch == 'h' || ch == 'j' ||
        ch == 'k' || ch == 'l') {
        printf("Mid line\n");
    } else {
        printf("Input mismatch\n");
    }
}

// 5. Lower line check
void checkLowerLine(char ch) {
    if (ch == 'z' || ch == 'x' || ch == 'c' || ch == 'v' || ch == 'b' || ch == 'n' || ch == 'm') {
        printf("Lower line\n");
    } else {
        printf("Input mismatch\n");
    }
}

// 6. Check range 1 to 5
void checkRange1to5(int num) {
    if (num >= 1 && num <= 5) {
        printf("This number is present\n");
    } else {
        printf("Not present\n");
    }
}

// 7. Check range 11 to 20
void checkRange11to20(int num) {
    if (num >= 11 && num <= 20) {
        printf("This number is present\n");
    } else {
        printf("Not present\n");
    }
}

// 8. Check range 23 to 56
void checkRange23to56(int num) {
    if (num >= 23 && num <= 56) {
        printf("This number is present\n");
    } else {
        printf("Not present\n");
    }
}

// 9. Check marks greater than 36 and calculate average
void checkMarksGreaterThan36(float marks[], int count) {
    int allGreater = 1;
    float sum = 0.0;

    for (int i = 0; i < count; i++) {
        if (marks[i] <= 36) {
            allGreater = 0;
            break;
        }
        sum += marks[i];
    }

    if (allGreater) {
        printf("Average: %.2f\n", sum / count);
    } else {
        printf("Fail\n");
    }
}

// 10. Check marks greater than 33 and calculate percentage
void checkMarksGreaterThan33(float marks[], int count) {
    int allGreater = 1;
    float sum = 0.0;

    for (int i = 0; i < count; i++) {
        if (marks[i] <= 33) {
            allGreater = 0;
            break;
        }
        sum += marks[i];
    }

    if (allGreater) {
        printf("Percentage: %.2f%%\n", (sum / (count * 100)) * 100);
    } else {
        printf("Fail\n");
    }
}

// 11. Check percentage for JEE eligibility
void checkEligibilityForJEE(float percentage) {
    if (percentage >= 75 && percentage <= 99) {
        printf("Eligible for JEE\n");
    } else {
        printf("Not eligible for JEE\n");
    }
}

// Convert temperature
void convertTemperature() {
    char choice;
    float temp;

    printf("Enter 'f' to convert Fahrenheit to Celsius or 'c' to convert Celsius to Fahrenheit: ");
    scanf(" %c", &choice);

    if (choice == 'f') {
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &temp);
        printf("Temperature in Celsius: %.2f\n", (temp - 32) * 5 / 9);
    } else if (choice == 'c') {
        printf("Enter temperature in Celsius: ");
        scanf("%f", &temp);
        printf("Temperature in Fahrenheit: %.2f\n", (temp * 9 / 5) + 32);
    } else {
        printf("Invalid choice\n");
    }
}

// Check shapes
void checkShape(float a, float b, float c) {
    if (a == 0 && b == 0 && c == 0) {
        printf("No shape\n");
    } else if (a != 0 && b != 0 && c == 0) {
        printf("Rectangle\n");
    } else if (a != 0 && b != 0 && c != 0) {
        printf("Triangle\n");
    } else if (a == b && b == c) {
        printf("Square\n");
    } else {
        printf("Shape not recognized\n");
    }
}
