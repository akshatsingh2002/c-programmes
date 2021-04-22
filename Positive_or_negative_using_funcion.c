#include<stdio.h>
void check(int);
int main(){
    int a;
    printf("Enter the number whether to check whether it's positive or negative:");
    scanf("%d",&a);
    check(a);
    return 0;
}
void check(int a){
    if(a==0)
printf("\nIt's zero");
else if(a>0)
printf("\nIt's positive number");
else
printf("It's a negative number");
}