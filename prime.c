#include<stdio.h>
int main(){
    int n,i,flag=0;
    printf("Enter the number to check whether it is prime or not\n");
    scanf("%d",&n);
    for(i=2;i<n/2;){
        if(n%i==0)
        {
        flag=0;
         break;
        }
        else 
        flag=1;
        i=i+1;
    }
    printf("%d",flag);
    if(flag==1)
    printf("It is a prime number");
   

    else 
    printf("It is not a prime number");

    return 0;
}
