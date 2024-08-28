#include<stdio.h>
int main()
{
    int i,n,x,max=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&x);
        if(max<=x){
            max=x;
        }
    }
    printf("%d\n",max);
    return 0;
}
