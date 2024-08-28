
#include<stdio.h>
int main()
{
    long long int i, t;
    scanf("%lld",&t);
    long long int arr[t];
    for(i=0; i<t; i++)
    {
        scanf("%lld",&arr[i]);
    }
    for(i=t-1; i>=0; i--)
    {
        printf("%lld ",arr[i]);
    }


    printf("\n");
    return 0;
}
