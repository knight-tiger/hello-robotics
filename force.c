#include <stdio.h>

int main() {
int mass, acc, force;
  printf("enter a mass ");
  scanf("%d",&mass);
  printf("enter acc :");
  scanf("%d",&acc);
  
  force = mass * acc;
  printf("force is : %d",force);
    return 0;
}
