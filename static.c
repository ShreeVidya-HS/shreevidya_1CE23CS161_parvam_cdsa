#include<stdio.h>
void func(){
    static int i=0;
    printf("%d ",i);
    i++;

}
int main(){
    for(int j=0;j<50;j++){
        func();
    
    }return 0;
}