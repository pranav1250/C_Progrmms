#include <stdio.h>
int main() {
    int n=9, sq=n*n, sum=0;
    while(sq>0){ sum+=sq%10; sq/=10; }
    if(sum==n) printf("Neon number\n");
    else printf("Not Neon\n");
    return 0;
}
