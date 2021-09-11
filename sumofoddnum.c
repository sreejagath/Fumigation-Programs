#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,n,sum=0;
    printf("Enter limit: ");
    scanf("%d",&n);
    for(i=1;i<=n;i=i+2){
        sum=sum+i;
    }
    printf("Sum of odd numbers upto %d is : %d ",n,sum);
}