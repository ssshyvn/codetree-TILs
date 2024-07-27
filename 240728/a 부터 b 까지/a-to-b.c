#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    scanf("%d %d", &a, &b);
    
    for(a; a<=b;){
        if(a%2==1){
            
            printf("%d ", a);
            a*=2;
        }
        else{
            
            printf("%d ", a);
            a+=3;
        }
    }
    return 0;
}