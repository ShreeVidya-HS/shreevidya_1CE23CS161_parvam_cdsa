#include<stdio.h>
int main(){
    int func=area();
    printf("the area of the rectangle is %d",func);
    return 0;
}
int area(){
    int a,b;
    printf("enter the length and width: ");
    scanf("%d\t%d",&a,&b);
    return a*b;
}