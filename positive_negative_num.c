#include<stdio.h>
int main()
{
    int a;
    printf("enter Value of a \n");
    scanf("%d", &a);
    if(a>=0)
    {
        printf("Value of a is non-negative\n");
    }
    else
    {
        printf("Value of a is negative\n");
    }
    
    return 0;
}
