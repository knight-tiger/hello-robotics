#include<stdio.h>
void main()
{
int income;
printf("Enter your annual Income:");
scanf("%d",&income);
int maximum=1000000;
int minimum=0;
if(income>maximum || income<minimum)
{
    printf("Invalid income\n");

}

else if(income>=90000)
{
    printf("Tax Rate is 30 percent\n");
}

else if(income>=50000)
{
    printf("Tax Rate is 20 percent\n");
}

else if(income>=30000)
{
    printf("Tax Rate is 10 percent\n");
}

else
{
    printf("No tax\n");
}


    


}


