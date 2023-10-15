#include <stdio.h>
int main()
{ 
  char a,ans;
  scanf("%c",&a);
  if(a>=97 && a<=122){
    ans=a-32;
    printf("%d\n",ans);
  } 
  else printf("%c\n",a);
    return 0;
}