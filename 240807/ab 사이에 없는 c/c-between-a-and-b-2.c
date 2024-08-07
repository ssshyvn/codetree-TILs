#include <stdio.h>
#include <stdbool.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    bool x=true;
    for(a; a<=b; a++){
        if(a%c!=0){
            x=false;
        }
    }
    if(x==true){
        printf("NO");
    }
    else{
        printf("YES");
    }
    return 0;
}