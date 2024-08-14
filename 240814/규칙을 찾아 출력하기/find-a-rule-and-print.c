#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) { // 행을 나타내는 루프
        for (int j = 1; j <= n; j++) { // 열을 나타내는 루프
            // 첫 번째 줄, 마지막 줄 또는 현재 열이 현재 행보다 작거나 같을 때 별을 출력
            if (i == 1 || i == n || j < i || j==n) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n"); // 줄바꿈
    }
    return 0;
}