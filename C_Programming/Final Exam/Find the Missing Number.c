#include<stdio.h>
int main()
{int t,a,b,c,l;
long long int m,k;
scanf("%d",&t);
while(t--){
    scanf("%lld%d%d%d",&m,&a,&b,&c);
    l=a*b*c;
    k=m/l;
    if(m%l==0)printf("%lld\n",k);
    else printf("-1\n");
}

    return 0;
}
