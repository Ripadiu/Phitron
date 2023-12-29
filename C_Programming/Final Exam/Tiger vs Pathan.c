#include<stdio.h>
int main()
{
    int t,n,i,c1,c2;
    scanf("%d",&t);
    char arr[100000];
    while(t--)
    {
        c1=0,c2=0;
        scanf("%d",&n);
        scanf("%s",arr);
        for(i=0; i<n; i++)
        {
            if(arr[i]=='T')c1++;
            if(arr[i]=='P') c2++;

        }

        if(c1>c2)printf("Tiger\n");
        else if(c2>c1)printf("Pathaan\n");
        else printf("Draw\n");
    }
    return 0;
}
