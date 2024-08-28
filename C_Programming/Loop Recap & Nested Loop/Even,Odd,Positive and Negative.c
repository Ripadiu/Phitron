#include<stdio.h>
int main()
{
    int i,a,x,e=0,o=0,p=0,n=0;
    scanf("%d",&a);
    for(i=0; i<a; i++)
    {
        scanf("%d",&x);
        if(x%2==0)
        {
            e++;
        }
        if(x%2!=0)
        {
            o++;
        }
        if(x>0)
        {
            p++;
        }
        if(x<0)
        {
            n++;
        }
    }
    printf("Even: %d\n",e);
    printf("Odd: %d\n",o);
    printf("Positive: %d\n",p);
    printf("Negative: %d\n",n);
    return 0;
}
