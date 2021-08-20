#include<stdio.h>
int main(){
    int value,a=2,flag;
    printf("Enter number to check whether it can be expressed in power of 2\n");
    scanf("%d",&value);
    while(a<=value){
    if(a-value==0)
    flag=1;
    else
    flag=0;
    a=a*2;
}
if(flag==1)
 printf("The following value can be expressed in power of 2\n");
    else 
    printf("The following value cannot be expressed in power of 2\n");
    return 0;
}