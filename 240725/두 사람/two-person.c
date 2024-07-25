#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int age1, age2;
    char sex1, sex2;

    scanf("%d %c", &age1, &sex1);
    scanf("%d %c", &age2, &sex2);

    printf("%d", (age1>=19 || age2>=19) && (sex1=='M' || sex2=='M'));
    return 0;
}