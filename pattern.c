#include<stdio.h>
int main(){
    int row,i,j,space,k=1;
    printf("Enter the number of rows you want\n");
    scanf("%d",&row);
    for(i=1;i<=row;i++){
       
    
        for(space=1;space<=row-i;space++)
        {
             printf(" ");
        }
            for(j=0;j!=2*i-1;j++)
            {
            printf("%d",k);
            k=k+1;
            }
            printf("\n");

        }
        
       
    
        
        
    
    return 0;
}