#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int t = n * 1.08;

    if (t < 206)
    {
        printf("Yay!\n");
    }
    else if (t == 206)
    {
        printf("so-so\n");
    }
    else
    {
        printf(":(\n");
    }
    return 0;
}