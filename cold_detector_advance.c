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
    printf  ("Enter for how many days you have fever:");
    int days;
    scanf("%d",&days);
    if(days>3)
    {
        printf("You should consult a doctor.\n");
    }
    else
    {
        printf("You can take paracetamol and rest at home.\n");
    }


}
else if(temp>=warning)
{
    printf("Warning: you may catch a fever.\n");
    printf("You should take care of your health.\n");
}
else
{
    printf(" Your body temperature is normal.\n");
}

}
