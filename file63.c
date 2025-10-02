#include <stdio.h>
int main() {
    int n=7;
    if(n>0 && n%2!=0)
        printf("%d is positive odd\n", n);
    else
        printf("%d does not satisfy condition\n", n);
    return 0;
}
