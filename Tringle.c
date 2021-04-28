#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the length of the first side:");
    scanf("%d",&a);
    printf("\n Enter the length of the second side:");
    scanf("%d",&b);
    printf("\n Enter the length of the third side:");
    scanf("%d",&c);
    if(a>(b+c)||b>(a+c)||c>(a+b))
    printf("\n Invalid Triangle");
    else{
        if(a==b&&b==c)
        printf("\n Equilateral Triangle");
        else if(a!=b&&b!=c&&c!=a)
        printf("\n Isocsles Trinagle");
        else 
        printf("\n Scalen Triangle");
    }
    

    return 0;
}