#include <stdio.h>
int main() {
    char ch='A';
    if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z'))
        printf("%c is an alphabet\n", ch);
    else
        printf("%c is not an alphabet\n", ch);
    return 0;
}
