#include<stdio.h>
int main(){
    int ar[10],n=0,i,count=0;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("\nEnter the elements\n");
    for(i=0;i<n;i++){
        scanf("%d",&ar[i]);

    }
    printf("\n The numbers are:\n");
    for(i=0;i<n;i++){
        printf("%d\n",ar[i]);
        
    }
    for(i=0;i<n;i++)
    {
        if(ar[i]==1&&ar[i+1]==0&&ar[i+2]==1&&ar[i+3]==0){
        printf("\n Sequence present");
        count++;
        }
    }
printf("%d",count);
    return 0;
}