include <stdio.h>  
  int main() {int a = 100;      
printf("Name- Meer\nSAP ID - 590028247\nCourse- BCA\nBatch- B5");  
printf("\n-----------------\n");     
printf("Outside all blocks: a = %d\n", a);  
{  
 int b = 200;         
printf("Inside first block: a = %d, b = %d\n", a, b);  
}  
if (a == 100) {int c = 300;         
printf("Inside if block: a = %d, c = %d\n", a, c);     
}      
printf("Outside all blocks: a = %d\n", a);     
return 0;  
} 
