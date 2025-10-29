#include <stdio.h> int main(){ 
int x1,y1,x2,y2,x3,y3; 
 printf("enter first pair of coordinates:"); 
  scanf("%d %d",Cx1,Cy1); 
 printf("enter second pair of coordinates:"); 
  ]scanf("%d %d",Cx2,Cy2); 
 printf("enter third pair of coordinates:"); 
  scanf("%d %d",Cx3,Cy3); 
 if(x1*(y2-y3) + x2*(y3-y1) + x3*(y1-y2)==0){ printf("The given points are collinear"); 
} 
 else{ printf("The given points are not collinear"); 
} 
return 0; 
} 
