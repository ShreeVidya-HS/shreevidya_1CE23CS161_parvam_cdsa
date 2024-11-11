#include<stdio.h>
#include<string.h>
int main(){
    int i,j;
    char str1[30]="i am ";
    char str2[30]="spidy";
    strcat(str1,str2);
    printf("Built-in: %s",str1);

    while(str1[i]!='\0'){
        i++;
    }

    while(str2[j]!='\0'){
        str1[i++]=str2[j++];
    }

   str1[i]='\0';

    printf("\nUser-defined: %s\n",str1);
    return 0;
}