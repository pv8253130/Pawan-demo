#include<stdio.h>
void addmatrix(int r,int c,int a[r][c],int b[r][c],int sum[r][c])
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            sum[i][j]=a[i][j]+b[i][j];

        }
    }
}
int main()
{
    int r,c;
    printf("enter the row and column:");
    scanf("%d%d",&r,&c);
    int a[r][c],b[r][c],sum[r][c];
    printf("enter the first matrix:\n");
    for(int i=0;i<r;i++)
    for(int j=0;j<c;j++)
    scanf("%d",&a[i][j]);
    printf("enter the second matrix:\n");
    for(int i=0;i<r;i++)
    for(int j=0;j<c;j++)
    scanf("%d",&b[i][j]);
    
    addmatrix(r,c,a,b,sum);
    
    printf("Sum of matrices:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++)
        printf("%d ",sum[i][j]);
        printf("\n");
    }






    
}