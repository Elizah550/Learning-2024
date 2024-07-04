#include <stdio.h>

void pattern(int n) 
{
     for(int i=0;i<n;i++){
      for (int j = 0; j < i; j++) {
        printf(" ");
        }
      for (int j = 0; j < (2*n - (2*i+1)); j++) {
        printf("*");
        }
      for (int j = 0; j < i; j++){
        printf(" ");
        }
      printf("\n");
    }
}
int main() {
    // Write C code here
    pattern(4);

    return 0;
}