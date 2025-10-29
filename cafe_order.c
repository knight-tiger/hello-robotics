//cafe order taking code
#include<stdio.h>
void order(int choice)
{
    switch(choice)
    {
        case 1:
        printf("your tea is ready");
        break;

        case 2:
        printf("your green tea is ready");
        break;

        case 3:
        printf("your hot coffee is ready");
        break;
        
        case 4:
        printf("your cold coffee is ready");
        break;

        default:
        printf("invalid order");

    }
}

void main()
{
    int choice;
    printf("what is your order ?\n");
    printf("1: Tea\n");
    printf("2: green tea\n");
    printf("3: hot coffee\n");
    printf("4: cold coffee\n");

    scanf("%d",&choice);
     order(choice);

    
}
