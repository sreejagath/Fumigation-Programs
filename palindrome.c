#include <stdio.h>
#include <string.h>

int main(){
    char string[20];
    int i,n,flag=0;
    
    printf("Enter a string:");
    scanf("%s", string);
    
    n = strlen(string);
    for(i=0;i < n ;i++){
        if(string[i] != string[n-i-1]){
            flag = 1;
            break;
   }
}
    
    if (flag) {
        printf("%s is not a palindrome", string);
    }    
    else {
        printf("%s is a palindrome", string);
    }
    return 0;
}
