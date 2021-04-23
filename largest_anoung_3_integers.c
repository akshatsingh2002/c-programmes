#include<stdio.h>
int main(){
    int a,b,c,max;
    printf("Enter integer one:");
    scanf("%d",&a);
    printf("\nEnter integer second:");
    scanf("%d",&b);
    printf("\n Enter the third integer:");
    scanf("%d",&c);
    if(a>b&&a>c)
    max=a;
    else if (b>a&&b>c)
    max=b;
    else
    max=c;
    printf("\n The largest number is %d",max);
    return 0;
}