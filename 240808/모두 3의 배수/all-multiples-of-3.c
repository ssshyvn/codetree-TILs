#include <stdio.h>
#include <stdbool.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    bool x=false;
    for(int i=1; i<=5; i++){
        scanf("%d", &n);
        if(n%3==0){
            x=true;
        }
        else{
            x=false;
            break;
        }
    }
    if(x==true){
        printf("1");
    }
    else{
        printf("0");
    }
    return 0;
}