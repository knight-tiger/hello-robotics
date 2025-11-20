#include <stdio.h>
#include <stdlib.h>

int main() 
{
    FILE *fptr = fopen("filename1.txt", "w");

    if (fptr == NULL) {
        printf("File not opened\n");
        return 1;     // Exit with error
    } else {
        printf("File opened successfully\n");
    }

    fclose(fptr);     // Always close the file
    return 0;
}
