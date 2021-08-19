#include <stdio.h>

int main()
{
    char s[255];
    scanf("%s", s);

    (s[1] == 'B') ? printf("ARC\n") : printf("ABC\n");
    return 0;
}