#include <stdio.h>
int main() {
    int n=29, flag=1;
    for(int i=2;i<=n/2;i++){
        if(n%i==0){ flag=0; break; }
    }
    if(flag) printf("%d is prime\n", n);
    else printf("%d is not prime\n", n);
    return 0;
}

