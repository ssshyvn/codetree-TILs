#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%.lf.", a/b);
    for(int i=1; i<=20; i++){
        a*=10;
        printf("%d", a/b);
        a%=b;
    }
    return 0;
}