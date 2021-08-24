#include <stdio.h>

int main()
{
    char b[3];
    for (int i = 0; i < 3; i++)
    {
        scanf("%c", &b[i]);
    }
    if (b[0] == 'A' && b[1] == 'A' && b[2] == 'A' || b[0] == 'B' && b[1] == 'B' && b[2] == 'B')
    {
        printf("No");
    }
    else
    {
        printf("Yes");
    }

    return 0;
}