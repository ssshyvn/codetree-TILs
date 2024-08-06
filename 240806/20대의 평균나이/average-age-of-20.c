#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int age;
    double avg;
    int sum=0;
    int cnt=0;
    while(1){
        scanf("%d", &age);

        if((age<20)||(age>29)){
            break;
        }
        sum+=age;
        cnt++;        
    }
    avg=(double)sum/cnt;
    printf("%.2lf", avg);
    return 0;
}