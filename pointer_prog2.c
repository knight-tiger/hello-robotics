//swaping two data using pointer in user defined function
#include<stdio.h>

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void main()
{
    printf("Pointer Program to swap two numbers\n");
    int a, b;
    printf("Enter two numbers to swap\n");
    scanf("%d%d", &a, &b);
    swap(&a,&b);
    printf("After swapping: a=%d b=%d\n", a, b);
}
