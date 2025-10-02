#include <stdio.h>
int main() {
    int n=9;
    if(n%3==0 && n%2!=0)
        printf("%d is multiple of 3 but not 2\n", n);
    else
        printf("%d does not satisfy condition\n", n);
    return 0;
}
