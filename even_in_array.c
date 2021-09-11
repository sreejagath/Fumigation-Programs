#include<stdio.h>
#include<stdlib.h>
int main(){
    int a[10],i,n=0;
    printf("Enter 5 elements of the array: ");
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++){
        if(a[i]%2==0){
            n++;
        }
    }
    printf("Number of even numbers in array is : %d",n);
    return 0;
}