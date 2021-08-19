// find the greatest of three integers using if else statement and && opereator //
#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the first number\n");
    scanf("%d",&a);
     printf("Enter the second number\n");
    scanf("%d",&b);
     printf("Enter the third number\n");
    scanf("%d",&c);
    if(a>b&&a>c)
    printf("\n %d is the geratest",a);
    if(b>a&&b>c)
    printf("\n %d is the geratest",b);
    else
     printf("\n %d is the geratest",c);
    return 0;
}