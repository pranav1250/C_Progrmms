#include <stdio.h>
#include <math.h>
int main() {
    double p=1000, r=5, t=2;
    double ci = p * pow(1 + r/100, t);
    printf("Compound Interest = %.2f\n", ci-p);
    return 0;
}
