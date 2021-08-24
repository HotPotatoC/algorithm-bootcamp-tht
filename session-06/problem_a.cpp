#include <stdio.h>

int main()
{
    int n;
    long long int t = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int _n = 0;
        scanf("%d", &_n);
        t += _n;
    }

    printf("%lld", t);

    return 0;
}