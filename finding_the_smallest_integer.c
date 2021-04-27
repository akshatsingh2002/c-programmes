#include<stdio.h>
int main(){
    int a,b,c,max;
    printf("Enter the first interger:");
    scanf("%d",&a);
    printf("\n Enter the second integer:");
    scanf("%d",&b);
    printf("\n Enter the third integer:");
    scanf("%d",&c);
    if(a>b&&a>c)
    max=a;
    else if(b>a&&b>c)
    max=b;
    else
    max=c;
    printf("\n The maximum value is %d",max);
    return 0;

}