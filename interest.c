#include <stdio.h>

int main()
{
    int p;
    float rate,years,interest;
    printf("Enter Principle amount : ");
    scanf("%d",&p);
    printf("Enter Rate of Interest : ");
    scanf("%f",&rate);
    printf("Enter Number of Years : ");
    scanf("%f",&years);
    interest=(p*rate*years)/100;
    printf("Simple interest is : %f",interest);
    
    return 0;
}

