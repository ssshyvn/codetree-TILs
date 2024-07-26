#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    char c;
    int i=1;
    scanf("%c %d", &c, &n);
    if(c=='A'){
        for(i; i<=n; i++){
            printf("%d ", i);
        }
    }
    else{
        for(n; n>=i; n--){
            printf("%d ", n);
        }
    }
    return 0;
}