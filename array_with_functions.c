#include<stdio.h>
#include<stdlib.h>
void getArray(int a[],int n);
void displayArray(int a[],int n);
int main(){
    int a[10],n=5;
    getArray(a,n);
    displayArray(a,n);
    return 0;
}
void getArray(int a[],int n){
    int i;
    printf("Enter the 5 elements of the array : ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
}
void displayArray(int a[],int n){
    int i;
    printf("Array is : ");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}