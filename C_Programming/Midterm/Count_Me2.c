#include<stdio.h>
#include<string.h>
int main()
{
    char str[100001];
    scanf("%s",str);
    int i,len,c1=0;
    len=strlen(str);
    for(i=0;i<len;i++){
        if(str[i]!='a'&&str[i]!='e'&&str[i]!='i'&&str[i]!='o'&&str[i]!='u')c1++;
    }
    printf("%d\n",c1);
    return 0;
}
