 
#include <stdio.h> 
 int main() { int l1, l2, l3, w1, w2, w3, p1, p2, p3; 
 printf("enter length and width of first rectangle: "); 
scanf("%d %d", Cl1, Cw1); 
 printf("enter length and width of second rectangle: "); 
scanf("%d %d", Cl2, Cw2); 
 printf("enter length and width of third rectangle: "); 
scanf("%d %d", Cl3, Cw3); 
 p1 = 2 * (l1 + w1); 
p2 = 2 * (l2 + w2); p3 = 2 * (l3 + w3); 
 int maxp = (p1 > p2) ? ((p1 > p3) ? p1 : p3) : ((p2 > p3) ? p2 : p3); 
 if (maxp == p1) { printf("the largest rectangle is: first rectangle\n%dcm\n", p1); 
} else if (maxp == p2) { printf("the largest rectangle is: second rectangle\n%dcm\n", p2); 
} else if (maxp == p3) { printf("the largest rectangle is: third rectangle\n%dcm\n", p3); 
} 
return 0; 
} 
