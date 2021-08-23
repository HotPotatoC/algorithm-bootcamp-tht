#include <stdio.h>

int main()
{
    int n;
    int total = 0;

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int t;
        scanf("%d", &t);
        if (t < 0)
        {
            total++;
        }
    }

    printf("%d", total);

    return 0;
}