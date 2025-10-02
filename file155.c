#include <stdio.h>
#include <string.h>
int main() {
    char str[]="level";
    int i=0, j=strlen(str)-1, flag=1;
    while(i<j){
        if(str[i]!=str[j]){ flag=0; break; }
        i++; j--;
    }
    if(flag) printf("Palindrome string\n");
    else printf("Not palindrome\n");
    return 0;
}
