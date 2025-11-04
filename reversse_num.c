#include<stdio.h>

 void main(){
      int num, reversed = 0,  reminder;
     printf("Enter a number");
     scanf("%d", &num);
    
     while(num != 0){
         reminder = num % 10;
         reversed = reversed * 10 + reminder;
         num /= 10;
         
     }
            printf(" reversed number is: %d\n", reversed);
           
     
 }
