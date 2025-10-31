#include <stdio.h>  
#include <limits.h>  
  int main() { printf("Name- Meer\nSAP ID - 590028247\nCourse- BCA\nBatch- B5");      
              printf("\n-----------------\n");     
              int n, i;     
              int arr[100];     
              int largest = INT_MIN, second = INT_MIN;  
      printf("Enter number of elements: ");     
              scanf("%d", &n);  
      printf("Enter %d integers:\n", n);     
              for(i = 0; i < n; i++) {scanf("%d", &arr[i]);  }  
      for(i = 0; i < n; i++) {if(arr[i] > largest) { second = largest;             
                                                    largest = arr[i];  
        } else if(arr[i] > second && arr[i] < largest) {second = arr[i];}  
      printf("Second largest integer: %d\n", second);     
              return 0;  
}
