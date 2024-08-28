#include<stdio.h>
int main()
{
    int x,i;
    scanf("%d",&x);

    if(x==1)
    {
        printf("-1\n");
    }
    else
    {
        for(i=2; i<=x; i=i+2)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}
