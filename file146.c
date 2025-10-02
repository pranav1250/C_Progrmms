#include <stdio.h>
#include <math.h>
int main() {
    int a=2, r=2, n=5;
    int sum=a*((int)pow(r,n)-1)/(r-1);
    printf("Sum of GP = %d\n", sum);
    return 0;
}
