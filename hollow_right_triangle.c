#include<stdio.h>

int main()
{ //printing hollow right angled triangle
    int side;
    printf("Enter the side length of the triangle\n");
    scanf("%d", &side);

    for(int i = 0; i < side; i++)
    {
        for(int j = 0; j < side; j++)
        {
          if(j == 0 || j == i || i == side - 1)
            printf("* ");
          else
            printf("  ");
        }
        printf("\n");
    }

    return 0;


}
