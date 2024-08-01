#include <stdio.h>
#include <string.h>

void studentDetails();
void calculateSalary();
void electricityBill();
void checkEvenOdd();
void checkVoterID();
void monthDays();
void weekDays();
void calculator();
void generateMarksheet();
void checkGender();
void vowelConsonant();
void findMaxTwoNumbers();
void findMaxThreeNumbers();
void swapWithVariable();
void swapWithoutVariable();
void timeOfDay();
void keyboardLines();
void printNumbers();
void printNumbersReverse();
void sumNumbers();
void evenNumbers();
void oddNumbers();
void countDigits();
void sumOfDigits();

int main() {
    int choice;

    printf("Menu:\n");
    printf("1. Student Details\n");
    printf("2. Salary Calculation\n");
    printf("3. Electricity Bill Calculation\n");
    printf("4. Check Even or Odd\n");
    printf("5. Check Voter ID\n");
    printf("6. Month Days\n");
    printf("7. Week Days\n");
    printf("8. Calculator\n");
    printf("9. Generate Marksheet\n");
    printf("10. Check Gender\n");
    printf("11. Vowel or Consonant\n");
    printf("12. Find Maximum of Two Numbers\n");
    printf("13. Find Maximum of Three Numbers\n");
    printf("14. Swap With Variable\n");
    printf("15. Swap Without Variable\n");
    printf("16. Time of the Day\n");
    printf("17. Keyboard Lines\n");
    printf("18. Print Numbers (1 to 10)\n");
    printf("19. Print Numbers (1 to 100)\n");
    printf("20. Print Numbers (50 to 1000)\n");
    printf("21. Print Numbers (34 to 89)\n");
    printf("22. Print Numbers (10 to 1)\n");
    printf("23. Sum Numbers (1 to 10)\n");
    printf("24. Sum Numbers (45 to 89)\n");
    printf("25. Print Even Numbers (1 to 10)\n");
    printf("26. Print Odd Numbers (1 to 100)\n");
    printf("27. Count Digits\n");
    printf("28. Sum of Digits\n");
    printf("29. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1: studentDetails(); break;
        case 2: calculateSalary(); break;
        case 3: electricityBill(); break;
        case 4: checkEvenOdd(); break;
        case 5: checkVoterID(); break;
        case 6: monthDays(); break;
        case 7: weekDays(); break;
        case 8: calculator(); break;
        case 9: generateMarksheet(); break;
        case 10: checkGender(); break;
        case 11: vowelConsonant(); break;
        case 12: findMaxTwoNumbers(); break;
        case 13: findMaxThreeNumbers(); break;
        case 14: swapWithVariable(); break;
        case 15: swapWithoutVariable(); break;
        case 16: timeOfDay(); break;
        case 17: keyboardLines(); break;
        case 18: printNumbers(1, 10); break;
        case 19: printNumbers(1, 100); break;
        case 20: printNumbers(50, 1000); break;
        case 21: printNumbers(34, 89); break;
        case 22: printNumbersReverse(10, 1); break;
        case 23: sumNumbers(1, 10); break;
        case 24: sumNumbers(45, 89); break;
        case 25: evenNumbers(1, 10); break;
        case 26: oddNumbers(1, 100); break;
        case 27: countDigits(); break;
        case 28: sumOfDigits(); break;
        case 29: return 0;
        default: printf("Invalid choice.\n");
    }

    return 0;
}

void studentDetails() {
    int roll_no;
    char name[50], fname[50], mname[50], address[100];
    char contact[20];
    float marks[3];
    float total, percentage;
    char division[20];

    printf("Input the Roll Number of the student: ");
    scanf("%d", &roll_no);
    printf("Student name: ");
    scanf("%s", name);
    printf("Father's name: ");
    scanf("%s", fname);
    printf("Mother's name: ");
    scanf("%s", mname);
    printf("Address: ");
    scanf("%s", address);
    printf("Contact: ");
    scanf("%s", contact);

    printf("Input the marks of Physics, Chemistry and Computer Application: ");
    for (int i = 0; i < 3; i++) {
        scanf("%f", &marks[i]);
    }

    total = marks[0] + marks[1] + marks[2];
    percentage = total / 3;

    if (percentage >= 60)
        strcpy(division, "First");
    else if (percentage >= 50)
        strcpy(division, "Second");
    else if (percentage >= 40)
        strcpy(division, "Third");
    else
        strcpy(division, "Fail");

    printf("Total: %.2f\n", total);
    printf("Percentage: %.2f%%\n", percentage);
    printf("Division: %s\n", division);
}

void calculateSalary() {
    char name[50], address[100], bank_details[50];
    float salary, holidays, deducted_salary;



    printf("Name: ");
    scanf("%s", name);
    printf("Address: ");
    scanf("%s", address);
    printf("Bank details: ");
    scanf("%s", bank_details);
    printf("Salary: ");
    scanf("%f", &salary);
    printf("Number of holidays taken: ");
    scanf("%f", &holidays);

    if (holidays == 1)
        deducted_salary = salary;
    else if (holidays >= 2 && holidays <= 5)
        deducted_salary = salary - (salary * 0.05);
    else if (holidays >= 6 && holidays <= 14)
        deducted_salary = salary - (salary * 0.10);
    else if (holidays == 15)
        deducted_salary = salary - (salary * 0.50);
    else
        deducted_salary = 0;

    printf("Name: %s\n", name);
    printf("Address: %s\n", address);
    printf("Bank Details: %s\n", bank_details);
    printf("Salary: %.2f\n", salary);
    printf("Salary after deductions: %.2f\n", deducted_salary);
    printf("Holidays taken: %.2f\n", holidays);
}

void electricityBill() {
    char name[50];
    int units;
    float amount, discount, total_amount;

    printf("Name: ");
    scanf("%s", name);
    printf("Number of units consumed: ");
    scanf("%d", &units);

    if (units <= 10)
        discount = 0.10;
    else if (units <= 20)
        discount = 0.15;
    else if (units <= 40)
        discount = 0.30;
    else
        discount = 0.50;

    amount = units * 10;
    total_amount = amount - (amount * discount);

    printf("Name: %s\n", name);
    printf("Units Consumed: %d\n", units);
    printf("Amount: %.2f\n", amount);
    printf("Discount: %.2f%%\n", discount * 100);
    printf("Total Amount to be Paid: %.2f\n", total_amount);
}

void checkEvenOdd() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (number % 2 == 0)
        printf("The number is even.\n");
    else
        printf("The number is odd.\n");
}

void checkVoterID() {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18)
        printf("You are eligible to vote.\n");
    else
        printf("You are not eligible to vote.\n");
}

void monthDays() {
    int month;
    printf("Enter month number (1-12): ");
    scanf("%d", &month);

    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            printf("31 days\n");
            break;
        case 4: case 6: case 9: case 11:
            printf("30 days\n");
            break;
        case 2:
            printf("28 or 29 days\n");
            break;
        default:
            printf("Invalid month number\n");
    }
}

void weekDays() {
    int day;
    printf("Enter day number (1-7): ");
    scanf("%d", &day);

    switch (day) {
        case 1: printf("Monday\n"); break;
        case 2: printf("Tuesday\n"); break;
        case 3: printf("Wednesday\n"); break;
        case 4: printf("Thursday\n"); break;
        case 5: printf("Friday\n"); break;
        case 6: printf("Saturday\n"); break;
        case 7: printf("Sunday\n"); break;
        default: printf("Invalid day number\n");
    }
}

void calculator() {
    char operation;
    float num1, num2, result;

    printf("Enter operation (+, -, *, /): ");
    scanf(" %c", &operation);
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    switch (operation) {
        case '+': result = num1 + num2; break;
        case '-': result = num1 - num2; break;
        case '*': result = num1 * num2; break;
        case '/': 
            if (num2 != 0)
                result = num1 / num2; 
            else {
                printf("Division by zero error\n");
                return;
            }
            break;
        default: 
            printf("Invalid operation\n");
            return;
    }

    printf("Result: %.2f\n", result);
}

void generateMarksheet() {
    float marks[5], total = 0.0, percentage;
    char grade;
    
    printf("Enter marks for five subjects:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%f", &marks[i]);
        total += marks[i];
    }

    percentage = (total / 500) * 100;
    
    if (percentage >= 80)
        grade = 'A';
    else if (percentage >= 60)
        grade = 'B';
    else if (percentage >= 50)
        grade = 'C';
    else if (percentage >= 45)
        grade = 'D';
    else if (percentage >= 25)
        grade = 'E';
    else
        grade = 'F';

    printf("Total Marks: %.2f\n", total);
    printf("Percentage: %.2f%%\n", percentage);
    printf("Grade: %c\n", grade);
}

void checkGender() {
    char gender;
    printf("Enter gender (m/f/o): ");
    scanf(" %c", &gender);

    switch (gender) {
        case 'm': printf("Male\n"); break;
        case 'f': printf("Female\n"); break;
        case 'o': printf("Other\n"); break;
        default: printf("Invalid input\n");
    }
}

void vowelConsonant() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || 
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        printf("Vowel\n");
    else
        printf("Consonant\n");
}

void findMaxTwoNumbers() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (a > b)
        printf("Maximum: %d\n", a);
    else
        printf("Maximum: %d\n", b);
}

void findMaxThreeNumbers() {
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b && a > c)
        printf("Maximum: %d\n", a);
    else if (b > c)
        printf("Maximum: %d\n", b);
    else
        printf("Maximum: %d\n", c);
}

void swapWithVariable() {
    int a, b, temp;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    temp = a;
    a = b;
    b = temp;

    printf("After swapping: a = %d, b = %d\n", a, b);
}

void swapWithoutVariable() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swapping: a = %d, b = %d\n", a, b);
}

void timeOfDay() {
    int hour;
    printf("Enter time in 24-hour format (0-23): ");
    scanf("%d", &hour);

    if (hour >= 0 && hour < 12)
        printf("Good Morning\n");
    else if (hour >= 12 && hour < 17)
        printf("Good Afternoon\n");
    else if (hour >= 17 && hour < 21)
        printf("Good Evening\n");
    else if (hour >= 21 && hour < 24)
        printf("Good Night\n");
    else
        printf("Invalid time\n");
}

void keyboardLines() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);

    if (strchr("qwertyuiop", ch))
        printf("Upper line\n");
    else if (strchr("asdfghjkl", ch))
        printf("Middle line\n");
    else if (strchr("zxcvbnm", ch))
        printf("Lower line\n");
    else
        printf("Input mismatch\n");
}

void printNumbers(int start, int end) {
    for (int i = start; i <= end; i++)
        printf("%d ", i);
    printf("\n");
}

void printNumbersReverse(int start, int end) {
    for (int i = start; i >= end; i--)
        printf("%d ", i);
    printf("\n");
}

void sumNumbers(int start, int end) {
    int sum = 0;
    for (int i = start; i <= end; i++)
        sum += i;
    printf("Sum: %d\n", sum);
}

void evenNumbers(int start, int end) {
    for (int i = start; i <= end; i++)
        if (i % 2 == 0)
            printf("%d ", i);
    printf("\n");
}

void oddNumbers(int start, int end) {
    for (int i = start; i <= end; i++)
        if (i % 2 != 0)
            printf("%d ", i);
    printf("\n");
}

void countDigits() {
    int num, count = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        num /= 10;
        count++;
    }

    printf("Number of digits: %d\n", count);
}

void sumOfDigits() {
    int num, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }

    printf("Sum of digits: %d\n", sum);
}
