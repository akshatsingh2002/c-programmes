#include<stdio.h>
#define pi 3.14;
int main(){
    float radius,area;
    printf("Enter the radius of the circle :");
    scanf("%f",&radius);
area=radius*radius*pi;
printf("\n Area of the radius is : %f",area);
return 0;
}