#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the number");
    scanf("%d",&a);
    b=a%10;
    for(;a>=10;)
    {
        a=a/10;

    }
    
    c=a;
    printf("%d",c);
    printf("\n The sum of first ans last digit of the number is %d",b+c);

    return 0;

}