#include <stdio.h>

int main()
{
    int num[1000] = {0, };
    int tmp;
    int count = 0;

    for (int i = 0; i < 10; i++) {
        scanf("%d", &tmp);
        num[tmp % 42]++;
    }

    for (int i = 0; i < 1000; i++) {
        if (num[i] > 0) {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}