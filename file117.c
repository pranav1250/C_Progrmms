#include <stdio.h>
int main() {
    int n=28, sum=0;
    for(int i=1;i<n;i++){
        if(n%i==0) sum+=i;
    }
    if(sum==n) printf("%d is Perfect\n", n);
    else printf("%d is not Perfect\n", n);
    return 0;
}
