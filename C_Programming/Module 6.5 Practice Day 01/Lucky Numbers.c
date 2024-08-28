#include<stdio.h>
int main(){

    int a,b,c;
    scanf("%d",&a);
    b=a/10;
    c=a%10;
    if(c%b==0||b%c==0)printf("YES\n");
    else printf("NO\n");
return 0;
}
