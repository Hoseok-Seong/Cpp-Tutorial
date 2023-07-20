#include <stdio.h>

int main()
{
    int a = 1;
    a = a + 1;
    a++;

    a = a + 2;
    a += 2;

    a = a - 1;
    a--;

    a = a - 3;
    a -= 3;

    a = a * 2;
    a *= 2;

    a = a / 2;
    a /= 2;

    printf("%d\n", 123);
    printf("%f\n", 0.1);
    printf("%g\n", 0.1);
    printf("%c\n", 'a');
    printf("%s\n", "hello"); // printf("hello"); 와 같음
    printf("\'hello\'");
    printf("\"hello\"");
    printf("hello\n");
    printf("hello \t hello");
    printf("5%%");
    printf("5\\");
    return 0;
}