 #include<stdio.h>
 #include<string.h>
 int is_palindrome(char *string1 ){
     int i, length;
     length = strlen(string1);
int flag=0;
    for (i=0;i<length/2;i++) {
        if(string1[i]!=string1[length-i-1]) {
            flag = 1;
            break;
        }
    }

    if (flag) {
        return 0;
    } else {
        return 1;
    }
 }
int main() {
    char string1[1000];
    scanf("%s", string1);
    int s=is_palindrome(string1);
    if (s==0) {
        printf("Not Palindrome\n");
    } else {
        printf("Palindrome\n");
    }
    return 0;
}
