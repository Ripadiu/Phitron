#include<stdio.h>
int main()
{

    char a;
    scanf("%c",&a);
    if(a>='a'&&a<='z')
    {
        a = toupper(a);
        printf("%c\n",a);
    }
    else
    {
        a= tolower(a);
        printf("%c\n",a);
    }

    return 0;
}
