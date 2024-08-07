#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);
    int cnt=0;
    while(1){
        if(n==1){
            break;
        }
        if(n%2==0){
            cnt++;
            n/=2;
            if(n==1){
                break;
            }
        }
        else if(n%2==1){
            cnt++;
            n=n*3+1;
            if(n==1){
                break;
            }
        }
    }
    printf("%d", cnt);
    return 0;
}