#include <stdio.h>

int main()
{
   float mark;
   printf("Enter your mark : ");
   scanf("%f",&mark);
   if (mark>=90&&mark<=100){
       printf("You got A Grade!");
   }else if(mark>=80&&mark<90){
       printf("You got B Grade");
   }else if(mark>=70&&mark<80){
       printf("You got C Grade");
   }else if(mark>=60&&mark<70){
       printf("You got D Grade");
   }else if(mark>=50&&mark<60){
       printf("You got E Grade");
   }else if(mark>=0&&mark<50){
       printf("Failed !");
   }else{
       printf("Invalid Entry!");
   }
  
   return 0;
}
