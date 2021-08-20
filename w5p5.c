#include<stdio.h>
int main(){
    int nrow,ncol,n;
    printf("Enter the number of rows you want for the pirymid\n");
    scanf("%d",&nrow);
    for(n=nrow;n>0;n--){
        for(ncol=0;ncol<n;ncol++){
        printf("*");
    }
    printf("\n");
    }
    return 0;

}