#include <stdio.h>

int main()
{
    int i, A, B, T = 0;

    scanf("%d", &T);

    for (i = 1; i <= T; i++)
    {
        scanf("%d %d", &A, &B);
        printf("Case #%d: %d + %d = %d\n", i, A, B, A + B);
    }

    return 0;
}