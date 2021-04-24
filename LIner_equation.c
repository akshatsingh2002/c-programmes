#include<stdio.h>
int main(){
    int a,b,c,x,y,sol=0,c1;
    printf("Enter the values of constants for the following equation ax+by=c");
    printf("\n Enter the value of a:");
    scanf("%d",&a);
    printf("\n Enter the value of b:");
    scanf("%d",&b);
    printf("\n Enter the value of c:");
    scanf("%d",&c);
    
    for(x=0;x<10;x++){
        for(y=0;y<10;y++){
            if((a*x)+(b*y)==c){
    printf("\n The value of x is %d the value of y is  %d",x,y);
    sol++;
    }
    }
    }
    if(sol==0)
    printf("\n No solution exist");  
return 0;
}