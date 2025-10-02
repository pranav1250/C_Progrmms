#include <stdio.h>
int main() {
    int n=10;
    if(n%2==0 || n%3==0)
        printf("%d is divisible by 2 or 3\n", n);
    else
        printf("%d is not divisible by 2 or 3\n", n);
    return 0;
}
