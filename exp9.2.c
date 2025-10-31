#include <stdio.h>  
  
int main() {  
  	printf("Name- Meer\nSAP ID - 590028247\nCourse- BCA\nBatch- B5");  
    printf("\n-----------------\n");  
    int n, i;  
    int arr[100];     int pos = 0, neg = 0, odd = 0, even = 0;  
      
    printf("Enter number of elements: ");     scanf("%d", &n);  
      
    printf("Enter %d integers:\n", n);  
    for(i = 0; i < n; i++) {         
scanf("%d", &arr[i]);  
    }  
      
    for(i = 0; i < n; i++) {         if(arr[i] > 0) {             
pos++;         } else 
if(arr[i] < 0) {             
neg++;  
        }  
        if(arr[i] % 2 == 0) { even++;
                            } else {             
odd++;  
        }  
    }  
      
    printf("Count of positive numbers: %d\n", pos);     printf("Count of negative numbers: %d\n", neg);     printf("Count of even numbers: %d\n", even);     printf("Count of odd numbers: %d\n", odd);  
    return 0;  
} 
