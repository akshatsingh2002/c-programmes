#include<stdio.h>
int main(){
    float n,sum=0,N=1;
    printf("Enter the number 1/n to find its sum\n");
    scanf("%f",&n);
    while(N<=n){
    sum=1/N+sum;
    N++;
    }
    printf("\nYour sum is %f",sum);


    return 0;
}