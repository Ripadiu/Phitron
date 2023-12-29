#include<stdio.h>
  int count_before_one(int n,int arr[]){
      int i,count=0;
      for(i=0;i<n;i++){
        if(arr[i]==1)break;
        count++;
      }
  return count;
  }
int main()
{
   int i,n;
   scanf("%d",&n);
   int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int s =count_before_one(n,arr);
    printf("%d\n",s);
    return 0;
}

