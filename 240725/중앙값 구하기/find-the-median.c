#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if(a>b){
        if(c>a){
            printf("%d", a); // b a c
        }
        else if(c<a){
            if(c>b){
                printf("%d", c); // b c a
            }
            else{
                printf("%d", b); // c b a
            }
        }

    }

    else if(b>a){
        if(c>b){
            printf("%d", b); // a b c
        }
        else if(c<b){
            if(c>a){
                printf("%d", c); // a c b
            }
            else{
                printf("%d", a); // c a b
            }
        }
    }

    return 0;
}