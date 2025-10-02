#include<stdio.h>

void main()
{ 
    int a,b;
    printf("Enter two numbers\n");
    scanf("%d %d",&a,&b);

    //code to find hcp of two numbers
    int hcp;
    hcp=(a<b)?a:b;
    while(1)
    {
        if(a%hcp==0 && b%hcp==0)
        {
            printf("HCP of %d and %d is %d\n", a, b, hcp);
            break;
        }
        hcp--;
    }   
}
