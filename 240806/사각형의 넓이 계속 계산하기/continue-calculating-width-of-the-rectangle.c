#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    char m;
    while(1){
        scanf("%d %d %c", &a, &b, &m);
        printf("%d\n", a*b);
        if(m=='C'){
            break;
        }
    }
    return 0;
}