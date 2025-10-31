#include <stdio.h>  
  int global_var = 5;  
  void show_global() {printf("Inside show_global(): global_var = %d\n", global_var);  
}  
  void modify_global() {global_var += 10;     
  printf("Inside modify_global(): global_var = %d\n", global_var);  
}  
  int main() {printf("Name- Meer\nSAP ID - 590028247\nCourse- BCA\nBatch- B5");      
  printf("\n-----------------\n");     
  printf("Inside main() before modification: global_var = %d\n", global_var);     
  show_global();     
  modify_global();     
  printf("Inside main() after modification: global_var = %d\n", global_var);     
  return 0;  
}
