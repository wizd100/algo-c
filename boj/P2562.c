#include <stdio.h>

int main()
{
    int arr[9];
    int tmp;
    int max = 0;

    for (int i = 0; i < 9; i++) {
        scanf("%d", &tmp);
        
        arr[i] = tmp;
        if (max < tmp) {
            max = tmp;
        }
    }

    tmp = 1;

    for (int i = 0; i < 9; i++) {
        if (arr[i] == max) {
            break;
        }

        tmp++;
    }

    printf("%d\n%d", max, tmp);
}