#include<stdio.h>
int main(){
int a;
printf("Enter the number to check whether it is positive negative or zero:");
scanf("&d",&a);
if(a==0)
printf("\nIt's zero");
else if(a>0)
printf("\nIt's positive number");
else
printf("It's a negative number");
return 0;
}