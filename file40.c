#include <stdio.h>
int main() {
    int n=123, rev=0;
    while(n>0) { rev=rev*10+n%10; n/=10; }
    printf("Reversed number = %d\n", rev);
    return 0;
}
