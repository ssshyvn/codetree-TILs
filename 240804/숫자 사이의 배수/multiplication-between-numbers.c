#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    int sum=0;
    int cnt=0;
    double avg;
    scanf("%d %d", &a, &b);
    for(a; a<=b; a++){
        if((a%5==0)||(a%7==0)){
            sum+=a;
            cnt++;
        }
    }
    avg=(double)sum/cnt;
    printf("%d %.1lf", sum, avg);
    return 0;
}