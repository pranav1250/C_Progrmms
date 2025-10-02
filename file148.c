#include <stdio.h>
int main() {
    int n=18, temp=n, sum=0;
    while(n>0){ sum+=n%10; n/=10; }
    if(temp%sum==0) printf("Harshad number\n");
    else printf("Not Harshad\n");
    return 0;
}
