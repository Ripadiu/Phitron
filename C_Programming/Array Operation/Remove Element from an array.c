
#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int pos;
    scanf("%d",&pos);
    for(i=pos; i<n-1; i++)
    {
        arr[i]=arr[i+1];
    }
    for(i=0; i<n-1; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}
