#include<stdio.h>

int main(){
    char str[]="HEllo World";
    int i=0;

    while(str[i]!='\0'){
        if(str[i]>='A'&&str[i]<='Z'){
            str[i]=str[i]+'a'-'A';
        }
        i++;

    }
    printf("lowercase string: %s\n:",str);
    return 0;
}