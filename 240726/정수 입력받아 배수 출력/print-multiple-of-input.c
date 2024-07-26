#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);
    int i=n;

    for(n; n<=i*5; n+=i){
        printf("%d ", n);
    }
    return 0;
}