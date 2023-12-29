#include<stdio.h>
int main()
{
    int r,c,i,j;
    scanf("%d%d",&r,&c);
    int a[r][c];
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
        for(i=0;i<c;i++){
        printf("%d ",a[r-1][i]);
        }
        printf("\n");
        for(i=0;i<r;i++){
            printf("%d ",a[i][c-1]);
        }


    return 0;
}
