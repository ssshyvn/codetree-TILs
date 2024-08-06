#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);
    int cnt=0;
    for(int i=1;i<=n;i++){
        n/=i;
        cnt++;
        if(n/i<=1){
            cnt++;
            break;
        }
        
    }
    printf("%d", cnt);
    return 0;
}