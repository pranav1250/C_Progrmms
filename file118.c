#include <stdio.h>
int main() {
    int n=145, temp=n, sum=0;
    while(n>0){
        int d=n%10, fact=1;
        for(int i=1;i<=d;i++) fact*=i;
        sum+=fact;
        n/=10;
    }
    if(sum==temp) printf("Strong number\n");
    else printf("Not Strong\n");
    return 0;
}
