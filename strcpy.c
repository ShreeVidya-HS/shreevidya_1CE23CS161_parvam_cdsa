#include<stdio.h>
#include<string.h>
int main(){
    char a[50]="hello";
    char b[50];
    strcpy(b,a);
    printf("copied str is %s\n",b);
    printf("length of the copied str is %d\n",strlen(b));
    strcat(a,b);
    printf("concatinated str is %s\n",a);
    int res=strcmp(a,a); //0 => both are same
    printf("%d\n",res);  //-1 => str1 is less
    return 0;            //+1 => str1 is greater
}