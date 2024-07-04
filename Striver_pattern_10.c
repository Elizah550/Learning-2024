#include <stdio.h>

void pattern(int n) 
{
      for (int i = 1; i<= 2*n-1; i++) {
    int stars= i;
    if (i > n) stars= 2*n-i;
    for(int j = 1; j<=stars; j++){
        printf("*");
      }
    printf("\n");
    }  
}
int main() {
    // Write C code here
    pattern(4);

    return 0;
}