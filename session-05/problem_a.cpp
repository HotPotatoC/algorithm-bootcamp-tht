#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("%d Abracadabra\n", i + 1);
    }

    return 0;
}