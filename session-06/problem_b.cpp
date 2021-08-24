#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int a = 0, b = 0;
        scanf("%d %d", &a, &b);

        printf("%d\n", a%b);
    }

    return 0;
}