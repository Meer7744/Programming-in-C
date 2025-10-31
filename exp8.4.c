#include <stdio.h>  
  void static_demo() {  
static int count = 0;     count++;     printf("static_demo call: count = %d\n", count);  
}  
  int main() {  
  	printf("Name- Meer\nSAP ID - 590028247\nCourse- BCA\nBatch- B5");  
    printf("\n-----------------\n");     
    static_demo();     
    static_demo();     
    static_demo();     
    return 0;  
} 
