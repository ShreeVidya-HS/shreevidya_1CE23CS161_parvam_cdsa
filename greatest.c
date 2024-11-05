#include<stdio.h>
int main(){
    int a=2,b=3,c=4;
    scanf("%d%d%d",a,b,c);
    if((a>b)&&(a>c)){
        printf("a is greatest");    
    }
    else if((b>a)&&(b>c)){
        printf("b is greatest");
    }
    else
        printf("c is greatest");
}