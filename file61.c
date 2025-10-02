#include <stdio.h>
int main() {
    int n=13, flag=0;
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            flag=1; break;
        }
    }
    if(n>1 && flag==0)
        printf("%d is prime\n", n);
    else
        printf("%d is not prime\n", n);
    return 0;
}

