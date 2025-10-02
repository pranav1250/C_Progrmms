#include <stdio.h>
int main() {
    int a=4, b=7, c=2;
    if(a>b && a>c)
        printf("%d is largest\n", a);
    else if(b>c)
        printf("%d is largest\n", b);
    else
        printf("%d is largest\n", c);
    return 0;
}
