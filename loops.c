#include<stdio.h>
int main(){
    int i;
    for(int i=0;i<=20;i++){
        if(i%2==0){
            printf("%d is even!\n",i);
        }
        else{
            printf("%d is odd\n",i);
        }
    }
}