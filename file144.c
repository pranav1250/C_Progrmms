#include <stdio.h>
int main() {
    int a=2, r=2, n=5;
    for(int i=0;i<n;i++) printf("%d ", a*(1<<i));
    return 0;
}
