#include <stdio.h>

int main()
{
    int n;
    long long int f = 1;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        f *= i;
    }
    printf("%lld", f);

    return 0;
}