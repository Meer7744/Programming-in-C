#include <stdio.h> int main() 
{int rows = 5;     
printf("Name- Meer\nSAP ID - 590028247\nCourse- BCA\nBatch- B5");  
printf("\n-----------------\n"); 
for (int i = 1; i <= rows; i++) { int start = rows - i + 1; 
for (int j = start; j <= rows; j++) {printf("%d", j);  
}  
printf("\n");  
}  
return 0;  
}  
