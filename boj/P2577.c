#include <stdio.h>

int main()
{
    int A;
    int B;
    int C;
    int total;
    int num[10] = {0, };

    scanf("%d%d%d", &A, &B, &C);

    total = A * B * C;

    while (total != 0) {
        num[total % 10]++;
        total /= 10;
    }

    for (int i = 0; i < 10; i++) {
        printf("%d\n", num[i]);
    }

    return 0;
}