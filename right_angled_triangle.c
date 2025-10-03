#include<stdio.h>

int main()
{ //printing right angled triangle
    int side;
    printf("Enter the side length of the triangle\n");
    scanf("%d", &side);

    for(int i = 0; i < side; i++)
    {
        for(int j = 0; j < i && j < side; j++)
        { 
            printf("* ");
        
        
        }
        printf("\n");
    }

    return 0;


}
