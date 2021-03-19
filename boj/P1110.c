#include <stdio.h>

int main()
{
    int N;
    int count = 0;
    int tmp;

    scanf("%d", &N);

    tmp = N;

    while (1) {
        tmp = (tmp % 10 * 10) + ((tmp / 10 + tmp % 10) % 10);
        count++;
        if (tmp == N) {
            break;
        }
    }

    printf("%d", count);
    return 0;
}