#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int l = a/1000;
    if(l % 2 == 0){
        printf("EVEN\n");
    }
    else{
        printf("ODD\n");
    }
    return 0;
}