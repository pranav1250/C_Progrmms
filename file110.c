#include <stdio.h>
int main() {
    int base=2, exp=5, result=1;
    for(int i=1;i<=exp;i++) result*=base;
    printf("%d^%d = %d\n", base, exp, result);
    return 0;
}
