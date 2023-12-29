#include<stdio.h>
int main()
{
    int t,n,i,j,loop;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        int a[n],b[n],c[n];
        for(i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        for( i=0; i<n; i++)
        {
            b[i]=a[i];
        }
        for (i = 0; i < n; ++i)
        {

            for (j = i + 1; j < n; ++j)
            {

                if (b[i] > b[j])
                {

                    loop =  b[i];
                    b[i] = b[j];
                    b[j] = loop;

                }

            }

        }
        for(i=0;i<n;i++){

            c[i]=a[i]-b[i];
        if(c[i]<0){
            c[i]=c[i]*(-1);
        }
        }

        for(i=0;i<n;i++){
            printf("%d ",c[i]);
        }
        printf("\n");
    }
    return 0;
}
