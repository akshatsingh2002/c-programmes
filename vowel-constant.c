#include<stdio.h>
#include<string.h>
int main(){
    char c,d;
    printf("Enter the alphabet");
    scanf("%s",&c);
    d=toupper(c);
    if(d=='A'||d=='U'||d=='O'||d=='I'||d=='E')
    printf("\n It' a vowel");
    else
    printf("\n It's a consonant");
    

    return 0;
}