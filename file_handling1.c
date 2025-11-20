#include<stdio.h>
#include<stdlib.h>

int main()
{
    // creating file pointer
    FILE* fptr;
 fptr = fopen("filename.txt","r");

 if(fptr==NULL)
 printf("File not Opened");

return 0;
}
