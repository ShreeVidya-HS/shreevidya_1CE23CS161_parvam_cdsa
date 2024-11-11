#include<stdio.h>
int main(){
    int res,nm[5],n,i;
    printf("enter the number of studentd: ");
    scanf("%d",&n);
    printf("enter the student names");
    for(int i=0;i<n;i++)
        scanf("%s",&nm[i]);
    res=strcmp(nm[],nm[]);
    for(int i=0;i<=n;i++){
    if(res==-1){
        printf("%d\n",nm[i]);
    }
    else if(res==1){
        printf("%d\n",nm[i-1]);
    }
    }
    return 0;
    
}