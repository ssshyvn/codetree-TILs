#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int i=1;
    int sum=0;
    scanf("%d", &n);
    for(i; i<=100; i++){
        sum+=i;
        if(sum>=n){
            break;
        }
    }
    printf("%d", i);
    return 0;
}