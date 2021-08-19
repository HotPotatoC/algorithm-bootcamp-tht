#include <stdio.h>

int main()
{
    int x1, x2, x3, x4, x5;
    scanf("%d", &x1);
    scanf("%d", &x2);
    scanf("%d", &x3);
    scanf("%d", &x4);
    scanf("%d", &x5);

    (x1 == 0)   ? printf("1\n")
    : (x2 == 0) ? printf("2\n")
    : (x3 == 0) ? printf("3\n")
    : (x4 == 0) ? printf("4\n")
    : (x5 == 0) ? printf("5\n")
                : printf("no\n");
    return 0;
}