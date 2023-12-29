#include<stdio.h>
int main()
{
    int r,c,i,j,e,f;
    scanf("%d%d",&r,&c);
    int a[r][c];
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    scanf("%d",&e);
    //row print
    for(i=0; i<c; i++)
    {
        printf("%d",a[e][i]);
    }
    //column print
    scanf("%d",&f);
    for(i=0; i<r; i++)
    {
        printf("%d",a[i][f]);
    }
    return 0;
}
