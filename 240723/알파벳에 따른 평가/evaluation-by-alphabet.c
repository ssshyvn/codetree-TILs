#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char x;
    scanf("%c", &x);
    if(x=='S') {
        printf("Superior");
    }
    else if(x=='A') {
        printf("Excellent");
    }
    else if(x=='B') {
        printf("Good");
    }
    else if(x=='C') {
        printf("Usually");
    }
    else if(x=='D') {
        printf("Effort");
    }
    else {
        printf("Failure");
    }        
    return 0;
}