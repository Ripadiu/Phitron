#include<stdio.h>
#include<string.h>
int main()
{
    char s1[1001];
    char s2[1001];
    scanf("%s",s1);
    scanf("%s",s2);
    int a=strlen(s1);
    int b=strlen(s2);
    printf("%d %d\n%s %s",a,b,s1,s2);
    return 0;

}
