
#include<stdio.h>
//code to store info of multiple students using array of structures}stu;
typedef struct 
{
    char name[20];
    int roll;
    char div;
}stu;

int main()
{   stu students[10];
    int n,i;
    printf("Enter number of students(max 10): ");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        printf("#student no.:%d\n",i+1);
        printf("Enter name");
        scanf(" %s",students[i].name);
        printf("Enter roll no:");
        scanf("%d",&students[i].roll);
        printf("Enter div:");
        scanf(" %c",&students[i].div);
    }
     // printing output
     printf("\n\n...STUDENT DATA...");
     for(i=0;i<n;i++)
        {
            printf("\n#student no.:%d\n",i+1);
            printf("Name: %s\n",students[i].name);
            printf("Roll no: %d\n",students[i].roll);
            printf("Div: %c\n",students[i].div);
        }

return 0;

}


