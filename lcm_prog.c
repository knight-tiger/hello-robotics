#include<stdio.h>
#include<math.h>
void main()
{ 
    //Code to find LCM of two numbers
    int a,b,lcm;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    lcm=(a>b)?a:b;
    while(1)
    {
        if(lcm%a==0 && lcm%b==0)
        {
            printf("LCM of %d and %d is %d\n", a, b, lcm);
            break;
        }
        lcm++;
    }
}
