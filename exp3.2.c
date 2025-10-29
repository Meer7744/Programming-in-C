#include <stdio.h> int main(){ 
int a,b,c; 
 printf("enter the sides of the triangle:"); 
  scanf("%d%d%d",Ca,Cb,Cc); 
 if (((a+b)>c)CC((b+c)>a)CC((c+a)>b)){ 
   printf("the triangle is valid\n"); 
} 
else{ printf("the triangle is not valid\n"); 
return 0; 
} 
if (a==b CC b==c){ printf("the triangle is equilateral\n"); 
} 
else if ((a*a + b*b == c*c) || 
(b*b + c*c == a*a) || 
(c*c + a*a == b*b)){ printf("the triangle is right angled\n"); 
if(a==b || b==c || c==a){ printf("It is also isosceles\n"); 
} 
} 
else if ((a==b)||(b==c)||(c==a)){ printf("the triangle is isosceles\n"); 
} else { printf("the triangle is scalene\n"); 
} 
return 0; 
} 
