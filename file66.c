#include <stdio.h>
int main() {
    int a=5,b=12,c=9,d=4;
    int max=a;
    if(b>max) max=b;
    if(c>max) max=c;
    if(d>max) max=d;
    printf("Largest = %d\n", max);
    return 0;
}
