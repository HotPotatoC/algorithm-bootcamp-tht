#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    int mean = ((a + b) / 2) + ((a + b) % 2 != 0);

    printf("%d\n", mean);
    return 0;
}