#include <stdio.h>

int main()
{
    char a;
    scanf("%c", &a);

    (a >= 65 && a <= 90) ? printf("A\n") : printf("a\n");
    return 0;
}