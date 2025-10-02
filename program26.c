#include<stdio.h>
void main()
{ // simple interest calculation
    int principle, rate, time;
    printf("Enter principle amount: ");
    scanf("%d", &principle);
    printf("Enter rate of interest: ");
    scanf("%d", &rate);
    printf("Enter time (in years): ");
    scanf("%d", &time);
    float si = (principle * rate * time) / 100.0;
    printf("Simple Interest = %.2f\n", si);
}
