#include <stdio.h>
#include <stdbool.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);
    bool x=false;
    for(int i=2; i<=(n-1); i++){
        if(n%i==0){
            x=true;
        }
    }
    if(x==false){
        printf("P");
    }
    else{
        printf("C");
    }
    return 0;
}