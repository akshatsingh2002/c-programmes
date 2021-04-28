#include<stdio.h>
int main(){
    int a,fact;
    printf("Enter the number to gets its factorial");
    scanf("%d",&a);
    if(a==0||a==1)
    fact=1;
    else{
        for(fact=1;a>0;a--)
        fact=fact*(a);


    }
    printf("\n The factorial is %d",fact);
    return 0;
}