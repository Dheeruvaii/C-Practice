// C program for infinite loop 
// using for, while, do-while 
#include <stdio.h> 
  
// Driver code 
int main() 
{ 
    for (;;) { 
        printf("Infinite-loop\n"); 
    } 
  
    while (1) { 
        printf("Infinite-loop\n"); 
    } 
  
    do { 
        printf("Infinite-loop\n"); 
    } while (1); 
  
    return 0; 
}

