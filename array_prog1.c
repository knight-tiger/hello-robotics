//code for finding top score in exam
#include<stdio.h>


int main()
{ int marks[10];
   printf("Enter total marks of students (upto 10)\n");
   printf("storing marks\n");
   for(int i=0;i<5;i++)
   {printf("enter here: ");
    scanf("%d",&marks[i]);
   }
printf("entered data ");
   for(int i=0;i<5;i++)
   {
    printf("%d ",marks[i]);
   }
int top;  // code to find highest score
 top=marks[0];  
   for(int i=0;i<5;i++)
   {
    if(marks[i]>top)
    top=marks[i];
   }
    

  printf(" highest score is %d ",top);
   
