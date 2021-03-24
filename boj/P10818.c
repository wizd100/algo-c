#include <stdio.h>

int main()
{
    int N;
    int tmp;
    int min = 1000000;
    int max = -1000000;

    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%d", &tmp);                

        if (min > tmp) {
            min = tmp;
        }

        if (max < tmp) {
            max = tmp;
        }
    }

    printf("%d %d", min, max);

    return 0;
}