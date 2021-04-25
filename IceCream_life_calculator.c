#include<stdio.h>
int main(){
    float iweight,left=1,rate,clock;
    printf("Eneter the amount of ice cream in grams:");
    scanf("%f",&iweight);
    printf("\nEneter the rate of melting between(0 and 1) :");
    scanf("%f",&rate);
    
    left=iweight;
    for(;left>0;){
        left=left-(rate*iweight);
        if(left>0){
        clock=clock+10;
        printf("\nIce cream left is %f",left);
        printf("\nTime=after %f minutes",clock);
        }
         
    }
    printf("\nTime=after %f minutes the ice cream is fully melted",clock+10);
    
    return 0;
}