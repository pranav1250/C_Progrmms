#include <stdio.h>
int main() {
    int n=24;
    if(n%4==0 || n%6==0)
        printf("%d is divisible by 4 or 6\n", n);
    else
        printf("%d is not divisible by 4 or 6\n", n);
    return 0;
}
