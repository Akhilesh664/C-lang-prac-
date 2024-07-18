#include <stdio.h>

int fibonacci_numbers(int x){
    if(x == 0){
        return 0;
    }else if(x == 1){
        return 1;
    }else{
        return fibonacci_numbers(x-2) + fibonacci_numbers(x-1);
    }
}

int main(){

    int n = 7;
    
    for(int i = 0; i < n; i++)
    {
        printf("%d ",fibonacci_numbers(i));
    }

    return 0;
}
