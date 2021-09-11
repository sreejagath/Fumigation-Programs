#include<stdlib.h>
#include<stdio.h>
int main(){
    int i,j,a[20][20],b[20][20],sum[20][20],n;
    printf("Enter the size of the array : \n");
    scanf("%d",&n);
    printf("Enter the elements of the array 1 : \n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the elements of the array 2 : \n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            sum[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("The sum of the two arrays are: \n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%02d ",sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}