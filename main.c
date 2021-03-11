#include <stdio.h>

int main(void) {
  
  int a,b,c,d,e,sum;
  Start:
  printf("\nEnter Maths Marks:");
  scanf("%d",&a);
  printf("\nEnter English Marks:");
  scanf("%d",&b);
  printf("\nEnter Physics Marks:");
  scanf("%d",&c);
  printf("\nEnter Chemistry Marks:");
  scanf("%d",&d);
  printf("\nEnter Social Studies Marks:");
  scanf("%d",&e);

  if (a>100 || b>100 || c>100 || d>100|| e>100){
    
    printf("\n\nInvalid Marks, Please check input again");
    goto Start;
  }
  sum= (a + b+ c + d + e)/5;

  if (sum >= 75 ){
    printf("\nGrade: Distinction Percentage: %d %% ", sum);
  }
  else if (sum >=60 && sum < 75){
    printf("\nGrade: First Divsion Percentage: %d %% ", sum);
  }
  else if (sum >=50 && sum < 60){
    printf("\nGrade: Second Divsion Percentage: %d %% ", sum);
  }
  else if (sum >=40 && sum < 50){
    printf("\nGrade: Third Divsion Percentage: %d %% ", sum);
  }
  else if(sum < 40){
    printf("\nGrade: Failed Percentage: %d %% ", sum);

  }
  


  return 0;
}