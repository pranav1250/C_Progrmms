#include <stdio.h>
int main() {
    char ch='A';
    if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z') || (ch>='0' && ch<='9'))
        printf("%c is alphanumeric\n", ch);
    else
        printf("%c is not alphanumeric\n", ch);
    return 0;
}
