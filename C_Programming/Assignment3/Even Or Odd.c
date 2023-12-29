#include<stdio.h>
void odd_even(){
int n,i,c1=0,c2=0;
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
    if(arr[i]%2==0)c1++;
    else c2++;
}
printf("%d %d\n",c1,c2);

}
int main(){
odd_even();
return 0;
}
