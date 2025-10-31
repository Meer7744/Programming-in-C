#include <stdio.h>  
  
int main() {     int n, i, key, count = 0;     
int arr[100];     
printf("Name- Meer\nSAP ID - 590028247\nCourse- BCA\nBatch- B5");  
    printf("\n-----------------\n");  
  
    printf("Enter number of elements: ");     
scanf("%d", &n);  
  
    printf("Enter %d integers:\n", n);     
for(i = 0; i < n; i++) {scanf("%d", &arr[i]);  
    }  
  printf("Enter the number to find its frequency: ");    
scanf("%d", &key);  
  for(i = 0; i < n; i++) {if(arr[i] == key) {count++;  }  
    }  
  printf("Frequency of %d = %d\n", key, count);     
return 0;  }
