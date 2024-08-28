 #include<stdio.h>
 int main()
 {
     int a,b,c;
     scanf("%d%d%d",&a,&b,&c);
     if(a<=b&&a<=c)printf("%d ",a);
     else if(b<=a&&b<=c)printf("%d ",b);
     else if(c<=b&&c<=a)printf("%d ",c);

     if(b<=a&&c<=a)printf("%d\n",a);
     else if(a<=b&&c<=b)printf("%d\n",b);
     else if(b<=c&&a<=c)printf("%d\n",c);
     return 0;
 }
