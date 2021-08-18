#include <stdio.h>

int main()
{
    int apples, pieces;
    scanf("%d", &apples);
    scanf("%d", &pieces);

    int appleSlices = (apples * 3) + pieces;
    int totalApplePies = appleSlices / 2;

    printf("%d\n", totalApplePies);
    return 0;
}