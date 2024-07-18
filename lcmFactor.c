// #include <stdio.h>
// #include <math.h>

// void findLcm(int a, int b){
//     int mx = fmax(a, b);

//     if(a==0 && b==0){
//         return ;
//     }

//     //for even number
//     while(a%2 == 0 && b%2 == 0){
//         printf("2, ");
//         a/=2;
//         b/=2;
//     }

//     for(int i=3; i < sqrt(mx); i+=2){
//         while(a%i == 0 && b%i == 0){
//         printf("%d ,",i);
//         a/=2;
//         b/=2;
//         }
//     }
//     if(a>2 || b>2){
//         printf("%d %d", a, b);
//     }

// }

// int main(){
    
//     int a = 65;
//     int b = 34;
//     findLcm(a, b);
    
//     return 0;
// }

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
    int a = 65;
    int b = 34;
    findLcm(a, b);

    return 0;
}
