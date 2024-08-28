#include<stdio.h>
int main()
{
    long long int e,m,b,min=0;
    scanf("%lld%lld%lld",&e,&m,&b);
    if(e<m&&e<b)min=e;
    else if(m<e&&m<b)min=m;
    else if(b<e&&b<m)min=b;
    long long int ne,nm,nb;
    ne=(e-min)/2;
    nm=m-min;
    nb=b-min;
    if(ne<=nb)printf("%lld\n",ne+min);
    else if(nb<ne)printf("%lld\n",nb+min);
    return 0;
}
