#include<stdio.h>
int main(){
    int a;
    printf("Enter to check whether the number is odd or even");
    scanf("%d",&a);
    if(a==0)
    printf("\nIt's neither even nor odd");
    else if((a%2)==0)
    printf("\n The enterd number is even");
    else
    printf("\nThe entered number is odd");
    return 0;
}