#include<stdio.h>
int main()
{
    int t,n,i,c1=0,x;
    scanf("%d",&t);
    while(t--){
    scanf("%d",&n);
    int arr[n+1];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&x);
    for(i=0;i<n;i++){
        if(arr[i]==x)c1++;
    }
    if(c1==0)printf("NO\n");
    else printf("YES\n");
    c1=0;

    }
    return 0;
}
