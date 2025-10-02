// Program 141: Sum of squares of first n natural numbers
#include <stdio.h>
int main() {
    int n=5, sum=0;
    for(int i=1;i<=n;i++) sum+=i*i;
    printf("Sum of squares = %d\n", sum);
    return 0;
}

