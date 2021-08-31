#include <stdio.h>

int f10(int m, int n)
{
    if (m == 0 || m == n)
    {
        return 1;
    }

    return f10(m - 1, n - 1) + f10(m, n - 1);
}

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    printf("%d\n", f10(m, n));
}