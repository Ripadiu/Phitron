#include<stdio.h>
int main()
{
    char a,b,c;
    int x,y;
    scanf("%c",&a);
    x=a;
    x=a+1;
    b=x;
    if(a==122){
        y=a-25;
        c=y;
        printf("%c\n",c);
    }
    else{
        printf("%c\n",b);
    }
    return 0;
}
