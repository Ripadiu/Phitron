#include<stdio.h>
int main()
{

    int n,k,i;
    scanf("%d %d",&n,&k);
    while(n--){
        for(i=1;i<=k;i++){
            printf("%d ",i);
        }
        printf("\n");
    }
}
