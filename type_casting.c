#include<stdio.h>
int main(){
    long phno;
    char name[50];
    printf("your name: ");
    scanf("%s",name);
    printf("ph no: ");
    scanf("%ld",&phno);
printf("you are not spidey , but you are : %s\nAlso i dont have ur phone no ur  ph no is %ld",name,phno);
    return 0;
} 