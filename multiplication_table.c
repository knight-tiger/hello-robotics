#include<stdio.h>
 void main(){

    int number, i;

printf("Enter a number to print its multiplication table");
scanf("%d", &number);

for(i = 1; i <= 10;  i++){
    
printf("%d x %d = %d", number, i,number * i);
}

}
