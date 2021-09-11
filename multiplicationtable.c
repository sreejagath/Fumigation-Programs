#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,i,result;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("Multiplication table of %d\n",n);
    for(i=1;i<=10;i++){
        result=n*i;
        printf("%02d * %d = %02d\n",i,n,result);
    }
    return 0;
}