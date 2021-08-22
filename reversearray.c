#include<stdio.h>
int main(){
    int i,n,arr[10],search,count=0,c;
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

    printf("Enter the number to check whether it is available in the list of not\n");
    scanf("%d",&search);
    for(c=0;c<n;c++){
        if(arr[c]==search)
        {
        printf("%d is present on location%d",search, c+1);
        count++;
        }

    }
    printf("%d is number present %d times in the list",search,count);


    return 0;
}