#include<stdio.h>
int main()
{int fre[26];
    char str[10001];
    scanf("%s",str);
    int i,len,c1=0;
    for(i=0; i<26; i++)
    {
        fre[i] = 0;
    }
    len=strlen(str);
    for(i=0;i<len;i++){
        if(str[i]>='a'&&str[i]<='z'){
            fre[str[i]-97]++;
        }
    }
     for(i=0; i<26; i++)
    {
        if(fre[i]!=0)
        {
            printf("%c - %d\n", (i + 97), fre[i]);
        }
    }
    return 0;
}
