#include<stdio.h>
#include<math.h>
void main()
{ 
    //to reverse a number
    int n,rev=0,rem;
    printf("Enter an integer: ");
    scanf("%d", &n);
    while(n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n/=10;
    }
    printf("Reversed Number: %d\n", rev);
}
