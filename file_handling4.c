#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE* fptr = fopen("test_file1.txt","w");
    char data[60] ="Every problem is a chance\n to learn new lessons";

    if(fptr == NULL)
    {
        printf("Erro occured while opening the file");
        return 1;
      
    }
    else 
   { printf("file opened successfully");
      fputs(data,fptr);
      fputs("\n",fptr);
      printf("\nData stored in file successfully\n");
   }
   fclose(fptr);

   fptr = fopen("test_file1.txt","r");

   //reading the file
   while(fgets(data,60,fptr)!=NULL)
   {
     printf("%s",data);
   }

   //closing the file
   fclose(fptr);
    return 0;
}
