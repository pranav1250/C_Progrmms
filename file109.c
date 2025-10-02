#include <stdio.h>
int main() {
    int sum=0;
    for(int i=1;i<=100;i+=2) sum+=i;
    printf("Sum of odd = %d\n", sum);
    return 0;
}
