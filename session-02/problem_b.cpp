#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    int first = num / 10;
    int second = num - (num / 10) * 10;

    printf("%d %d\n", first, second);
    return 0;
}