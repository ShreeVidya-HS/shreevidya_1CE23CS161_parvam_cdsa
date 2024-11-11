#include<stdio.h>
int main(){
    int r,c;
    printf("Enter the number of rows: ");
    scanf("%d",&r);
    printf("Enter the number of columns: ");
    scanf("%d",&c);
    int trans[r][c],a[r][c],i,j;
    printf("Enter the elements of matrix A:\n\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }printf("matrix A\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++){
                printf("%d ",a[i][j]);

        }printf("\n");
        
    }
    printf("transpose: \n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++){
            trans[i][j]=a[j][i];
            printf("%d ",trans[i][j]);

        }printf("\n");
    }
    return 0;            

}

