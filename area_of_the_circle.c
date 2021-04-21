#include<stdio.h>
#define pi 3.14;
int main(){
    float radius,area,circumference;
    printf("Enter the radius of the circle :");
    scanf("%f",&radius);
area=radius*radius*pi;
printf("\n Area of the radius is : %f",area);
    circumference=radius*2*pi;
    printf("\n circumference of the circle is %f:",circumference);
return 0;
}
