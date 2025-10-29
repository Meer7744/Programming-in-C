#include <stdio.h>  
int main() {int rows = 5;  
int i, space, num;     
  printf("Name- Meer\nSAP ID - 590028247\nCourse- BCA\nBatch- B5");  
  printf("\n-----------------\n");  
  for(i = 1; i <= rows; i++) {for(space = rows - i; space > 0; space--) {  
  printf("  ");  }  
  for(num = 1; num <= i; num++) {printf("%d", num); }  
  printf("\n");  
  }  
  return 0;  } 
