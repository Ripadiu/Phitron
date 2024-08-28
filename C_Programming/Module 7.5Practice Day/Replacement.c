#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        if(arr[i]<0)printf("2 ");
        else if(arr[i]>0)printf("1 ");
        else printf("0 ");
    }
    printf("\n");

    return 0;
}
