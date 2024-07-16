#include <stdio.h>

int main(){
    int a = 2;
    int b = 3;
    int ans = 1;
    
    while(b>0){
        ans *= a; 
        b--;
    }
    printf("%d",ans);
    return 0;
}