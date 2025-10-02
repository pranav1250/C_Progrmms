#include <stdio.h>
int main() {
    int n=5;
    float sum=0.0;
    for(int i=1;i<=n;i++){
        sum+=1.0/i;
    }
    printf("Harmonic sum = %.2f\n", sum);
    return 0;
}
