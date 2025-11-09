#include<stdio.h>
//code to store student info in struct using typedef without struct keyword and using pointer
typedef struct 
{
    char name[20];
    int roll;
    char div;
}stu;
int main()
{
    stu s1;  
    stu *ptr;
    ptr=&s1;
    printf("...THIS PROGRAM WILL STORE STUDENT DATA...");

    printf("\nEnter your name: ");
    gets(ptr->name);

    printf("\nEnter your roll no: ");
    scanf("%d",&ptr->roll);
    
    printf("\nEnter your div: ");
    scanf(" %c",&ptr->div);

    printf("Name: %s",ptr->name);
     printf("\nRoll no: %d",ptr->roll);
      printf("\nDiv: %c",ptr->div);

   

    return 0;
}
