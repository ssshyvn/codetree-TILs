#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    scanf("%d %d", &a, &b);

    for(a; a<=b; a+=2){
        printf("%d ", a);
    }
    return 0;
}