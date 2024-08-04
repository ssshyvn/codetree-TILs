#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int sum=0;
    int cnt=0;
    double avg;
    for(int i=1; i<=10; i++){
        scanf("%d", &n);
        if((n>=0)&&(n<=200)){
            sum+=n;
            cnt++;
        }
    }
    avg=(double)sum/cnt;
    printf("%d %.1lf", sum, avg);
    return 0;
}