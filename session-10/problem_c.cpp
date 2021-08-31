#include <stdio.h>
#include <string.h>

int main()
{
    char s[1001];
    scanf("%s", s);
    int sz = strlen(s);

    int fc = 0;
    int tc = 0;
    for (int i = 0; i < sz; i++)
    {
        if (s[i] == '\0')
            break;
        if (s[i] == '2')
            tc++;
        if (s[i] == '5')
            fc++;
    }

    if (tc == fc)
    {
        printf("=\n");
    }
    if (tc > fc)
    {
        printf("2\n");
    }
    if (tc < fc)
    {
        printf("5\n");
    }
    return 0;
}
