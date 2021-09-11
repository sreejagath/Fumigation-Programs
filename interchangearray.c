#include<stdio.h>
#include<stdlib.h>
int main(){
    int a[50],b[50],temp[50],n=5,i;
    printf("Enter 5 values of array 1 : ");
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter 5 values of array 2 : ");
    for(i=0;i<5;i++){
        scanf("%d",&b[i]);
    }
    printf("Array 1 : \n");
    for(i=0;i<5;i++){
        printf("%d ",a[i]);
    }
    printf("\n Array 2 : \n");
    for(i=0;i<5;i++){
        printf("%d ",b[i]);
    }
    for(i=0;i<5;i++){
        temp[i]=a[i];
        a[i]=b[i];
        b[i]=temp[i];
    }
    printf("\n Arrays after swapping\n");
    printf("Array 1 : \n");
    for(i=0;i<5;i++){
        printf("\n%d ",a[i]);
    }
    printf("\nArray 2 : \n");
    for(i=0;i<5;i++){
        printf("\n%d ",b[i]);
    }

}