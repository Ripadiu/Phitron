#include<stdio.h>
int main()
{
    int n,i,c1=0,c2=0;
    scanf("%d",&n);
    int arr[n];
    for(i=1;i<=n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]%2==0)c1++;
        if(arr[i]%3==0&&arr[i]%2!=0)c2++;
    }
    printf("%d %d\n",c1,c2);
    return 0;
}
