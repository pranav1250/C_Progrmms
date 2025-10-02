#include <stdio.h>
int main() {
    char ch='@';
    if((ch<'0') || (ch>'9' && ch<'A') || (ch>'Z' && ch<'a') || (ch>'z'))
        printf("%c is a special symbol\n", ch);
    else
        printf("%c is not a special symbol\n", ch);
    return 0;
}
