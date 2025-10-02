#include<stdio.h>
void main()
{ 
    //code to calculate factorial of a number
    int n, i;
    unsigned long long fact = 1;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        fact *= i;
    }
    printf("Factorial of %d = %llu\n", n, fact);
}
