#include<stdio.h>
int main(){
    int t,m1,m2,d,s,c,e;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d%d",&m1,&m2,&d);
        s=m1+m2;
        c=(d*m1)/s;
        e=d-c;
        printf("%d\n",e);
        s=0,c=0,e=0;
    }

return 0;
}
