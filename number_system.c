#include<stdio.h>
int main(){
    /*
    %d for decimal
    %o for octal
    %x for hexadecimal lwr case
    %X for hexadecimal upr case
    */
   int a=10;
   int b=1234534;
   float f=12.5;
   char c='S';
   char s[]="VIDYA";
   printf("a=10,  b=1234534,  f=12,5,  c='s',  c='vidya' ");
   printf("%.9f",a);
   printf("d: %d\n",a);
   printf("x: %x\n",a);
   printf("X: %X\n",a);
   printf("d: %d\n",a);
   printf("o:%o\n",a);
   printf("%c\n",c);
   printf("%s\n",s);
   printf("x: %x\n",b);
   printf("X: %X\n",b);
   printf("%10s\n",s); 
   printf("I am %10s and i'm spidey!\n",s); 
   printf("I'm a %6d and i'm spidey!\n",a);  
} 



