#include<stdio.h>
int main(){
    float r,i,p=3.14;
    printf("Enter Radius of the circle\n");
    scanf("%f",&i);
    r=p*i*i;
    printf("Circumference of the circle is %.2f",r);
    return 0;

}