#include<stdio.h>
int main(){
    int i=1,t;
    int j;
    printf("enter a number:");
    scanf("%d",&t);
    while(i<=10){
        j=t*i;
        printf("%dx%d=%d\n",t,i,j);
        
        i++;
    }
}