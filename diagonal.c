#include<stdio.h>
int main(){
    int r,c,n;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d",&r,&c);
    int a[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++){
            printf("Enter element [%d][%d]: ",i,j);
            scanf("%d",&a[i][j]);

        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++){
                printf("%d ",a[i][j]);

        }printf("\n");
        
    }
    printf("the diagonal elements are: ");

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++){
            if(i==j)
                printf("%d  ",a[i][j]);

        }
    }

    return 0;
}