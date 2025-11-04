#include <stdio.h>

int main() {
float m, v, KE;
  printf("enter  m ");
  scanf("%f",&m);
  printf("enter v :");
  scanf("%f",&v);
   
  
  KE = (m*v*v)*1/2;
  printf("KE is : %f",KE);
    return 0;
}
