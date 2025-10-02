#include<stdio.h>
#include<math.h>
void main()
{ 
    //to check whether a number is prime or not
    int n,i,flag=0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
        printf("%d is a prime number.\n", n);
    else
        printf("%d is not a prime number.\n", n);
}
