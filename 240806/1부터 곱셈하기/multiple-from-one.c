#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);
    int prod=1;
    int i=1;
    for(i; i<=10; i++){
        prod*=i;
        if(prod>=n){
            break;
        }
    }
    printf("%d", i);
    return 0;
}