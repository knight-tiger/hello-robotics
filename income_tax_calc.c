#include<stdio.h>
void main()
{
int income, tax;
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
 tax=income*30/100;
 printf("Tax to be paid is %d\n",tax);
}

else if(income>=50000)
{
    printf("Tax Rate is 20 percent\n");
 tax=income*20/100;
 printf("Tax to be paid is %d\n",tax);
}

else if(income>=30000)
{
    printf("Tax Rate is 10 percent\n");
 tax=income*10/100;
 printf("Tax to be paid is %d\n",tax);
}

else
{
    printf("No tax\n");
}


    


}
