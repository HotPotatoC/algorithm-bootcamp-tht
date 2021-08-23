#include <stdio.h>

int main()
{
    int n;
    long long int total = 0;
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        if (i % 3 != 0 && i % 5 != 0)
        {
            total += i;
        }
    }

    printf("%lld", total);
    return 0;
}