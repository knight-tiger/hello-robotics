#include<stdio.h>

int main()
{ //printing a contiuous character pattern
    int row;
    printf("Enter the row size\n");
    scanf("%d", &row);
  char ch='A';

    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j<=i; j++)
        { 
            printf("%c ",ch);
            ch++;
        }
        printf("\n");
    }

    return 0;


}
