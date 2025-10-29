#include <stdio.h>  
int main() {int n = 5; int i, j, space;  
  printf("Name- Meer\nSAP ID - 590028247\nCourse- BCA\nBatch- B5"); 
  printf("\n-----------------\n");     
for(i = 1; i <= n; i++) {for(space = n - i; space > 0; space--) { printf("  "); 
} for(j = 1; j < i; j++) {printf("%d", j); 
} print("%d", i);         
for(j = i - 1; j >= 1; j--) {printf(" %d", j);  
}  
printf("\n");  
}  
for(i = n - 1; i >= 1; i--) {for(space = n - i; space > 0; space--) {  printf("  ");  
}  for(j = 1; j < i; j++) { printf("%d", j); 
}  printf("%d", i); 
for(j = i - 1; j >= 1; j--) { printf(" %d", j);  
}  
 printf("\n");  
}  
return 0;  
} 
