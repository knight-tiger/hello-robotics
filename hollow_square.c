#include<stdio.h>

int main()
{ //printing a hollow square
    int side;
    printf("Enter the side length of the square\n");
    scanf("%d", &side);

    for(int i = 0; i < side; i++)
    {
        for(int j = 0; j < side; j++)
        { if(i == 0 || i == side - 1 || j == 0 || j == side - 1)
            printf("* ");
        else
            printf("  ");
        }
        printf("\n");
    }

    return 0;


}
