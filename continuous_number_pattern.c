#include<stdio.h>

int main()
{ //printing a square
    int side;
    printf("Enter the side length of the square\n");
    scanf("%d", &side);
   int n= 1;

    for(int i = 0; i < side; i++)
    {
        for(int j = 0; j<=i; j++)
        { 
            printf("%d ",n);
            n++;
        }
        printf("\n");
    }

    return 0;


}
