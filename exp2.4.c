#include <stdio.h> #include 
<math.h> 	int 
main() { float a, b, c; float d; 
        printf("Enter coefficients a, b and c: "); 
        scanf("%f %f %f", &a, &b, &c); d = b*b - 4*a*c; 
        printf("Roots are for positive : %f",(-b + sqrt(d))/(2*a)); 
        printf("/n Roots are for negative : %f",(-b - sqrt(d))/(2*a));
        return 0; 
} 
