
#include <stdio.h>

int main()
{
    int A;
    int B;

    scanf("%d%d", &A, &B);
    printf("%0.9lf", (double)A / B);
    return 0;
}