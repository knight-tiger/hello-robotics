// program to alert when temperature is high than permissible
#include<stdio.h>

int main()
{
    int reading;
    printf("Enter the reading: ");
    scanf("%d",&reading);
    int* ptr = &reading;
    if(*ptr >= 200)
    printf("Exceeded the permissible temperature \n stop the operation");
    else if(*ptr >= 150)
    printf("warning! temperature is unsafe to operate further\n");
    else
    printf("temperature is safe to operate");

}

