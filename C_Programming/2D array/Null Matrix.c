#include<stdio.h>
int main()
{
    int r,c,i,j,c1;
    scanf("%d%d",&r,&c);
    int element=r*c;
    int a[r][c];
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
     c1=0;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(a[i][j]==0)c1++;
        }
    }
    if(element==c1)printf("Null Matrix\n");
    else printf("Not a null matrix\n");
    return 0;
}
