#include <stdio.h>
int main() {
    int n=5;
    for(int i=n;i>=1;i--){
        for(int s=1;s<=n-i;s++) printf(" ");
        for(int j=1;j<=2*i-1;j++) printf("*");
        printf("\n");
    }
    return 0;
}
