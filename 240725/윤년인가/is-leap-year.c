#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int y;
    scanf("%d", &y);

    if(y%100==0 && y%400!=0){
        printf("false");
    }
    else if(y%4==0){
        printf("true");
    }
    else{
        printf("false");
    }
    return 0;
}