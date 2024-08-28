#include<stdio.h>
int main()
{
    int i,n,a,x,p;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&x);
    p=-1;
    for(i=0;i<n;i++){
        if(arr[i]==x){
          p=i;
          break;
        }}
        if(p==-1)printf("-1\n");
        else printf("%d\n",i);
    return 0;
}
