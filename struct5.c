#include<stdio.h>
// struct program to store employee data
typedef struct employee
{
    char name[20];
    int id;
    char role[20];

}emp;
void main()
{
    emp e1;
printf("Enter Employee Name: ");
    scanf("%s", e1.name);

    printf("Enter ID no: ");
    scanf("%d", &e1.id);

    printf("Enter Job Role in company: ");
    scanf("%s", e1.role);


printf("<Employee details\n>");
printf("name: %s\n",e1.name);
printf("ID: %d\n",e1.id);
printf("job role: %s\n",e1.role);



}
