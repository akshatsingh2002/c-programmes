#include<stdio.h>
int main(){
    int row,i,j,space;
    printf("Enter the number of rows you want\n");
    scanf("%d",&row);
    for(i=1;i<=row;i++){
       
    
        for(space=1;space<=row-i;space++)
        {
             printf(" ");
        }
            for(j=0;j!=2*i-1;j++)
            {
            printf("*");
            }
            printf("\n");

        }
        for(i=row-1;i>0;i--){
       
    
        for(space=1;space<=row-i;space++)
        {
             printf(" ");
        }
            for(j=0;j!=2*i-1;j++)
            {
            printf("*");
            }
            printf("\n");

        }
        
    
    return 0;
}