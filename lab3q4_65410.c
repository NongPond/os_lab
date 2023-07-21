#include <stdio.h>
int main() {
  int n = 1;
  int sum;
  float avr;
  while(n>0){
        printf("enter a number : ");
        scanf("%d",&n);
        avr++;
        if(n>0) {
        sum += n;
        }
  }
  float a = (float)sum/avr;
  printf("sum = %d\n", sum);
  printf("average = %f\n" , a);
  return 0;
}
