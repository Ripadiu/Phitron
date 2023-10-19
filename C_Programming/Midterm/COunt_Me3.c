
#include<stdio.h>
#include<string.h>
int main()
{int t;
scanf("%d",&t);
while(t--){
    char str[10001];
    scanf("%s",str);
    int i,len,c1=0,c2=0,c3=0;
    len=strlen(str);
    for(i=0;i<len;i++){
        if(str[i]>='A'&&str[i]<='Z')c2++;
        if(str[i]>='a'&&str[i]<='z')c1++;
        if(str[i]>='0'&&str[i]<='9')c3++;
    }
    printf("%d %d %d\n",c2,c1,c3);
    }
    return 0;
}
