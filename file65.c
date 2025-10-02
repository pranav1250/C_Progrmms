#include <stdio.h>
int main() {
    char ch='o';
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
        printf("%c is a lowercase vowel\n", ch);
    else
        printf("%c is not a lowercase vowel\n", ch);
    return 0;
}