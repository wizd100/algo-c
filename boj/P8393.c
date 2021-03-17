#include <stdio.h>

int main()
{
    int n;
    int sum = 0;

    scanf("%d", &n);

    // for 방식
    // for (int i = 1; i <= n; i++) {
    //     sum += i;
    // }

    // 가우스의 합 n * (n + 1) / 2
    sum = n * (n + 1) / 2;

    printf("%d", sum);
    return 0;
}