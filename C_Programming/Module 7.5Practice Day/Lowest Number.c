#include<stdio.h>
#include<limits.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int min=INT_MAX;
    int p;
    for(i=0;i<n;i++){
        if(arr[i]<min){min=arr[i];
        p=i+1;}
    }
    printf("%d %d\n",min,p);
    return 0;
}
