#include<stdio.h>
int main(){
    int i,j,n,arr[10],ar[10];
    printf("Enter the number of elemntes you want in the array\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    printf("\nEnter the element");
    scanf("%d",&arr[i]);
    }
    printf("\n The arrays is ");
    for(i=0;i<n;i++)
    {
    printf("\n%d",arr[i]);
    
    }
for(i=0,j=n-1;j>=0;j--,i++){
    ar[j]=arr[i];
}
for(i=0,j=n-1;j>=0;j--,i++){
    printf("%d\n",ar[i]);
}

    return 0;
}