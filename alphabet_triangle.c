#include<stdio.h>

int main()
{ //printing a inverted triangle with numbers

    int side;
    printf("Enter the side length of the triangle\n");
    scanf("%d", &side);

    for(int i = 0; i < side; i++)
    {
        for(int j = 0; j < side; j++)
        {
    
            if(j < side - i - 1)
                printf(" ");
            else
                printf("%d ", j - side + i + 1);
            
        }
        printf("\n");
    }

    return 0;


}
