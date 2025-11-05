#include<stdio.h>
// Function to read sensor data using pointer

int reading(int *x, int *y)
{
    if( *x > *y)
    return *x;
    else
    return *y;
    
}

void main()
{
    int a,b;
    printf("Enter sensor value 1:\n");
    scanf("%d",&a);
     printf("Enter sensor value 2:\n");
    scanf("%d",&b);
    printf("Highest reading is:%d",reading(&a,&b));

    
}
