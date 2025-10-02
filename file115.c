#include <stdio.h>
int main() {
    int sum=0;
    for(int n=1;n<=5;n++){
        int fact=1;
        for(int i=1;i<=n;i++) fact*=i;
        sum+=fact;
    }
    printf("Sum = %d\n", sum);
    return 0;
}
