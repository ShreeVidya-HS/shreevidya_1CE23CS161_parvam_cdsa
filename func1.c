#include<stdio.h>
int main(int a,int b){

    add(a,b);
    
    return 0;

}
int add(){
    int sum,a,c,b;
    printf("enter the first number:");
    scanf("%d",&a);
    printf("enter the second number: ");
    scanf("%d",&b);
    c=a+b;
    printf("%d + %d = %d",a,b,c);
    
    return 0;
}