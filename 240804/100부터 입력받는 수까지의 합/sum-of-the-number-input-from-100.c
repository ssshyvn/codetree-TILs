#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);
    int sum=0;
    for(n; n<=100; n++){
        sum+=n;
    }
    printf("%d", sum);
    return 0;
}