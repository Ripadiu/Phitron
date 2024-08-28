#include<stdio.h>
int main()
{
    long long int i, t,sum=0;
    scanf("%lld",&t);
    long long int arr[t];
    for(i=0; i<t; i++)
    {
        scanf("%lld",&arr[i]);
    }
    for(i=0; i<t; i++)
    {
        sum=sum+arr[i];
    }

    if(sum<0)printf("%lld\n",sum*(-1));
    else printf("%lld\n",sum);
    return 0;
}
