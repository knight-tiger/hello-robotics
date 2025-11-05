//using pointer  to swap data 
#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("Enter two numbers to swap\n");
    scanf("%d%d",&a,&b);
    printf("Before swapping: a=%d b=%d\n",a,b);
    //swapping using temp variable
    temp=a;
    a=b;
    b=temp;
    printf("After swapping: a=%d b=%d\n",a,b);
    return 0;
}
