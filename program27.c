#include<stdio.h>
#include<math.h>
void main()
{ 
    //code to calculate square root of a number
    float num, squareRoot;
    printf("Enter a positive number: ");
    scanf("%f", &num);
    squareRoot = sqrt(num);
    printf("Square root of %.2f = %.2f\n", num, squareRoot);
}
