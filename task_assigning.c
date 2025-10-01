#include<stdio.h>
int main()
{
    printf("Enter your roll number ");
    int n;
    scanf("%d",&n);
    if(n>=1 && n<=20)
    {
        printf("Your assignment is robotic arm project");
    }
    else if(n>=21 && n<=40)
    {
        printf("Your assignment is smart home system project");
    }
    else if(n>=41 && n<=60)
    {
        printf("Your assignment is AI chatbot project");
    }
    else if(n>=61 && n<=80)
    {
        printf("Your assignment is machine learning project");
    }
    else if(n>=81 && n<=100)
    {
        printf("Your assignment is web development projects");
    }
    else
    {
        printf("Invalid Roll Number");
    }

    return 0;
}
