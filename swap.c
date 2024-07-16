#include <stdio.h>

int main(){

    int a = 2;
    int b = 4;

    printf("a = %d, b = %d\n",a ,b);

    int temp = a;
    a = b;
    b = temp;

    printf("a = %d, b = %d",a ,b);
    
}