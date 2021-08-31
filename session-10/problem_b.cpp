#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);
    char s[n];
    scanf("%s", s);
    if (n == 1)
    {
        puts("No");
        return 0;
    }
    if (n % 2 != 0)
    {
        puts("No");
        return 0;
    }

    for (int i = 0; i < n / 2; i++)
    {
        if (s[i] != s[n / 2 + i])
        {
            puts("No");
            return 0;
        }
    }
    puts("Yes");
    return 0;
}
