#include<stdio.h>
int main()
{
    int a = 10, b = 20;
    printf("Initial values: a = %d, b = %d\n", a, b);
    a += b; // a = a + b
    printf("a += b: %d\n", a);
    a -= b; // a = a - b
    printf("a -= b: %d\n", a);
    a *= b; // a = a * b
    printf("a *= b: %d\n", a);
    a /= b; // a = a / b
    printf("a /= b: %d\n", a);
    a %= b; // a = a % b
    printf("a %%= b: %d\n", a);
    return 0;
}
