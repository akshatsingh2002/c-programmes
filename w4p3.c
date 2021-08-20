#include<stdio.h>
int main(){
    float a,fact;
    printf("Enter the Number to find it's factorial\n");
    scanf("%f",&a);
    fact=a;
    while(a>1){
    fact=fact*(a-1);
    a--;

    }
    printf("%f",fact);


    return 0;

}