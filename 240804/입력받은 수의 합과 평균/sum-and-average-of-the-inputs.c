#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n, num;
    int sum=0;
    int cnt=0;
    double avg;
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        scanf("%d", &num);
        sum+=num;
        cnt++;
    }
    avg=(double)sum/cnt;
    printf("%d %.1lf", sum, avg);
    return 0;
}