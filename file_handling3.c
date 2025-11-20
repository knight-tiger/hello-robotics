#include <stdio.h>
#include <stdlib.h>

int main() 
{
    // Writing in the created file

    char data[] = "I am a student of ZCOER\n"
                  "I love coding";

    FILE *fptr = fopen("filename2.txt", "w");

    if (fptr == NULL) 
    {
        printf("Error while opening the file\n");
        return 1;
    }

    printf("File opened successfully\n");

    fputs(data, fptr);
    fputs("\n", fptr);

    printf("Data entered successfully\n");

    fclose(fptr);

    return 0;
}
