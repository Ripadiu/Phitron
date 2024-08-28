#include<stdio.h>
int main()
{
    int a;
    long long int b;
    char c;
    float d;
    double e;
    scanf("%d %lld %c %f ",&a,&b,&c,&d);
    scanf("%lf",&e);
    printf("%d\n%lld\n%c\n%.2f\n%.1lf\n",a,b,c,d,e);
    return 0;
}

