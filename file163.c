#include <stdio.h>
#include <string.h>
int main() {
    char str[]="C123@ChatGPT";
    int digits=0, letters=0, others=0;
    for(int i=0;i<strlen(str);i++){
        if((str[i]>='0'&&str[i]<='9')) digits++;
        else if((str[i]>='A'&&str[i]<='Z')||(str[i]>='a'&&str[i]<='z')) letters++;
        else others++;
    }
    printf("Letters=%d Digits=%d Others=%d\n", letters,digits,others);
    return 0;
}
