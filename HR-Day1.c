#include<stdio.h>
int main(){
    char message[100];
    fgets(message,sizeof(message),stdin);
   
    printf("Hello, World!\n");
     puts(message);
    return 0;
}
