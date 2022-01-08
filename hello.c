#include <stdio.h>
int main(void)
{
    printf("Hello world!\n");

    int a, b;
    printf("1つ目の整数 : a = ");
    scanf("%d", &a);
    printf("2つ目の整数 : b = ");
    scanf("%d", &b);

    printf("a + b = %d\n", a + b);

    return 0;
}