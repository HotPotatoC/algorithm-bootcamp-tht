#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    if (n % 1000 == 0)
    {
        printf("0");
        return 0;
    }

    int x = (n / 1000 + 1);
    printf("%d\n", (x * 1000) - n);

    return 0;
}