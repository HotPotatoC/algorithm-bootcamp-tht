#include <stdio.h>

int main()
{
    double a, b;

    scanf("%lf %lf", &a, &b);

    double c = ((a - b) / 3) + b;

    printf("%lf\n", c);
    return 0;
}