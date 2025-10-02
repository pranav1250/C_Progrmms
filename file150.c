#include <stdio.h>
int main() {
    int n=1124, sum=0, prod=1, temp=n;
    while(n>0){
        int d=n%10;
        sum+=d; prod*=d;
        n/=10;
    }
    if(sum==prod) printf("%d is Spy number\n", temp);
    else printf("%d is not Spy number\n", temp);
    return 0;
}