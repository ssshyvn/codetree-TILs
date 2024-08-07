#include <stdio.h>
#include <stdbool.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, c;
    bool x=false;
    scanf("%d %d %d", &a, &b, &c);
    for(a; a<=b; a++){
        if(a%c==0){
            x=true;
        }
    }
    if(x==true){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}