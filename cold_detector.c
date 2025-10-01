#include<stdio.h>
void main()
{
float temp,critical,warning;
printf("Enter the temperature value:");
scanf("%f",&temp);
critical=100.0;
warning=80.0;
if(temp>=critical)
{
    printf("you have fever!\n");
}
else if(temp>=warning)
{
    printf("Warning: you may catch a fever.\n");
}
else
{
    printf(" Your body temperature is normal.\n");
}

}
