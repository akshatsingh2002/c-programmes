#include<stdio.h>
int main(){
    char ch[1],c[10],sen[50];
    scanf("%s",ch);
    printf("%s\n",ch);
    scanf("%s",c);
    scanf("%*[\n] %[^\n]",sen);
    
    printf("%s\n",c);
    printf("%s",sen);
    return 0;
}
