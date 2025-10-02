#include <stdio.h>
int main() {
    int n=1234;
    if(n>=1000 && n<=9999)
        printf("%d is a four-digit number\n", n);
    else
        printf("%d is not a four-digit number\n", n);
    return 0;
}
