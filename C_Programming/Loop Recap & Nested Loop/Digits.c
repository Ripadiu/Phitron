#include<stdio.h>
int main()
{
    int t,n,l;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        do
        {
            l=n%10;
            printf("%d ",l);
            n=n/10;
        }while(n!=0);
            printf("\n");
    }
    return 0;
}
