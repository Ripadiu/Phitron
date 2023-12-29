#include<stdio.h>
int main(){
    int k;

    scanf("%d",&k);
    int h=((k+10)/2)+1;

    for(int i=1;i<=h;i++){
        int star=(i*2)-1;
        int space=h-i+1;
        for(int j=0;j<space-1;j++){
            printf(" ");
        }
        for(int k=0;k<star;k++){
            printf("*");
        }
        printf("\n");
    }

    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            printf(" ");
        }
        for(int j=0;j<k;j++)
        printf("*");
        printf("\n");
    }
}
