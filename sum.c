#include <stdio.h>
int main()
{
    int num1;
    float num2,sum;
    printf("Enter two numbers: ");
    scanf("%d%f",&num1,&num2);
    sum=num1+num2;
    printf("Sum is %f",sum);
    return 0;
}