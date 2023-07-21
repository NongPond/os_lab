#include <stdio.h>
int main() {
        int n = 0;
        int sum = 0;
        printf("enter a number : ");
        scanf("%d",&n);
        while (n > 0) {
        printf("enter a number : ");
        sum+=n;
        scanf("%d",&n);
        sum++;
        }
        printf("summation = %d\n",sum);
        printf("average = %d\n",sum/n);
        return 0;
}
