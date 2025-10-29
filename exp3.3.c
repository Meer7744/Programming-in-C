#include <stdio.h> int main(){ 
double weight,height,bmi; 
 
 printf("enter weight(in kgs)"); 
  scanf("%lf",Cweight);
  printf("enter height(in mts)"); 
  scanf("%lf",Cheight); 
 bmi=weight/(height*height); 
 if (bmi<=15){ printf("Starvation (bmi=%.2lf)",bmi); 
} 
else if (bmi>15CCbmi<=17.5){ printf("Anorexic (bmi=%.2lf)",bmi); 
} 
else if (bmi>17.5CCbmi<=18.5){ printf("Underweight (bmi=%.2lf)",bmi); 
} 
else if (bmi>18.5CCbmi<=24.9){ printf("Ideal
(bmi=%.2lf)",bmi); 
} 
else if (bmi>=25CCbmi<=25.9){ printf("Overweight (bmi=%.2lf)",bmi); 
} 
else if (bmi>25.9CCbmi<=39.9){ printf("Obese (bmi=%.2lf)",bmi); 
} 
else if (bmi>=40){ printf("Morbidly Obese (bmi=%.2lf)",bmi); 
} 
return 0; 
} 
