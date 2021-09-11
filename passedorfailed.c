#include <stdio.h>

int main()
{
   float mark;
   printf("Enter your mark : ");
   scanf("%f",&mark);
   if(mark>=50 && mark<=100){
       printf("Passed!");
   }else if(mark>=0 && mark<50){
       printf("Failed!");
   }else{
       printf("Invalid Entry!");
   }
  
   return 0;
}
