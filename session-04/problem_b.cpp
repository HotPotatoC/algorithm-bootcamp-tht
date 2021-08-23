#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    if (a > 0 && b == 0)
    {
        printf("Gold\n");
    }
    else if (a == 0 && b > 0)
    {
        printf("Silver\n");
    }
    else
    {
        printf("Alloy\n");
    }

    return 0;
}