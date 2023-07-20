#include <stdio.h>

int main()
{
    // int a = 1, b = 2;
    // printf("%d", a < b ? 1 : 0);

    int a, b;
    scanf("%d %d", &a, &b);
    if (a == b)
    {
        printf("2");
    }
    else if (a > b)
    {
        printf("1");
    }
    else
    {
        printf("0");
    }

    return 0;
}