#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,a[50],j,temp=0,n;
    printf("Enter the limit : ");
    scanf("%d",&n);
    printf("Enter %d elements : ",n);
    for(i =0;i < n;i++){
        scanf("%d",&a[i]);
    }
     for (i = 0; i < n; i++) {   
        for (j = i+1; j < n; j++) {   
           if(a[i] < a[j]) {  
               temp = a[i];  
               a[i] = a[j];  
               a[j] = temp;  
           }   
        }   
    }
    printf("Sorter Array : " );  
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}