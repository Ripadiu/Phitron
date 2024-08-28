#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int arr[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
     i=0,j=n-1;
    while(i<j){
        int temp=arr[i]
        arr[i]=arr[j];
        arr[j]=arr[i];
        i++,j--;
    }
      for(i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}
