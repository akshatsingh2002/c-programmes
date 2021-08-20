#include<stdio.h>
int main(){
    int s1,s2,s3;
    printf("Enter the length of first side\n");
    scanf("%dd",&s1);
    printf("Enter the length of second side\n");
    scanf("%dd",&s2);
    printf("Enter the length of third side\n");
    scanf("%dd",&s3);
    if((s1>=s2+s3)||(s2>=s1+s3)||(s3>=s1+s2))
    printf("\n This is not a valid triangle");
    else{
    if(s1==s2&&s1==s3)
    printf("\n This is an equilateral traingel");
    else if(s1!=s2&&s2!=s3)
    printf("\n This is a scalene traingle");
    else 
    printf("\n This is an isoceles triangle");

    }
    return 0;
}