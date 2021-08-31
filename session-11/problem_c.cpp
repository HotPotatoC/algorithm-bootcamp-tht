#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);
    int ac = 0, wa = 0, tle = 0, re = 0;
    while (n--)
    {
        char s[4];
        scanf("%s", s);

        if (strcmp(s, "AC") == 0)
            ac++;

        if (strcmp(s, "WA") == 0)
            wa++;

        if (strcmp(s, "TLE") == 0)
            tle++;

        if (strcmp(s, "RE") == 0)
            re++;
    }

    printf("AC x %d\n", ac);
    printf("WA x %d\n", wa);
    printf("TLE x %d\n", tle);
    printf("RE x %d\n", re);
    return 0;
}