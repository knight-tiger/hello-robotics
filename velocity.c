// Online C compiler to run C program online
#include <stdio.h>

int main() {
int distance, t, v;
  printf("enter a distance");
  scanf("%d",&distance);
  printf("enter time:");
  scanf("%d",&t);
  
  v = distance / t;
  printf("velocity is : %d",v);
    return 0;
}
