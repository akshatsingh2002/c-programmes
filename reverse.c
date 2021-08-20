#include<stdio.h>
int main(){
    int value,rev,a=10;
    printf("Enter the number to find its reverse");
    scanf("%d",&value);
    if(a<value){
    for(;a<=value;)
    {
    printf("%d",value%a);

    value=value/10;
    if(value<a)
    printf("%d",value);

    }   
    }
    else 
     printf("%d",value);


return 0;


    
}
