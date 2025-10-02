#include <stdio.h>
int main() {
    int a=2, d=3, n=5, sum=0;
    for(int i=0;i<n;i++) sum+=a+i*d;
    printf("Sum of AP = %d\n", sum);
    return 0;
}
