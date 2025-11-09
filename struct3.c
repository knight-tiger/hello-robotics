#include<stdio.h>
//code to store student info in struct using typedef without struct keyword
typedef struct 
{
    char name[20];
    int roll;
    char div;
}stu;
int main()
{
    stu s1;  
    printf("...THIS PROGRAM WILL STORE STUDENT DATA...");

    printf("\nEnter your name: ");
    gets(s1.name);

    printf("\nEnter your roll no: ");
    scanf("%d",&s1.roll);
    
    printf("\nEnter your div: ");
    scanf(" %c",&s1.div);

    printf("Name: %s",s1.name);
     printf("\nRoll no: %d",s1.roll);
      printf("\nDiv: %c",s1.div);

   

    return 0;
}
