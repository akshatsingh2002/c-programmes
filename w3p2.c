#include<stdio.h>
int main(){
    int a;
    printf("Enter the number to check whether it is positive or negative\n");
    scanf("%d",&a);
    if(a==0)
    printf("The entered number is equal to zero");
    else if(a>0)
    printf("The entered number is positice");
    else 
    printf("The number is negative");
    return 0;
    }