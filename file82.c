#include <stdio.h>
int main() {
    int cp=100, sp=120;
    if(sp>cp)
        printf("Profit = %d\n", sp-cp);
    else if(cp>sp)
        printf("Loss = %d\n", cp-sp);
    else
        printf("No profit no loss\n");
    return 0;
}
