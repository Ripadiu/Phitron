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
    int flag=1;
    if(r!=c){
        flag=0;
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(i==j)continue;
            if(a[i][j]!=0)flag=0;
        }
    }
    if(flag==1)printf("Primary Diagonal\n");
    else printf("Not Diagonal\n");
return 0;
}
