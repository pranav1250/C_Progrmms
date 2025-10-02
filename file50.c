#include <stdio.h>
int main() {
    int n=-10;
    if(n<0)
        n=-n;
    printf("Absolute value = %d\n", n);
    return 0;
}
