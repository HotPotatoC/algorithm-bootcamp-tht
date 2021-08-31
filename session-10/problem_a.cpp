#include <stdio.h>

int max_of_four(int a, int b, int c, int d);

int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    printf("%d\n", max_of_four(a, b, c, d));
}

int max_of_four(int a, int b, int c, int d)
{
    int max_1 = a > b ? a : b;
    int max_2 = c > d ? c : d;
    return max_1 > max_2 ? max_1 : max_2;
}