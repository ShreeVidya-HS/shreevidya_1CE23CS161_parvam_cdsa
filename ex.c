#include<stdio.h>
int main(){
    int a=4;
    int b=2;
    int c=b&a;
    printf("%d\n",c);
    printf("%d\n",sizeof(c));
    int d=c++; 
    printf("%d\n",d); //int or float 4, char 1, double 2, short 1
    int e=++a;
    printf("%d\n",e);
    int f=a++ + ++b;
    printf("%d\n",f);
    int g=++a + b++;
    printf("%d\n",g);
    return 0;
}
                                                                                                                                                                              