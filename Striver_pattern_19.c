#include <stdio.h>

void pattern(int n) 
{
for (int i = 0; i < n; i++) {
      // stars
      for (int j = 0; j < n-i; j++){
          printf("* ");
      }
        // spaces
        for (int j = 0; j < 2*i ; j++){
            printf(" ");
        }

          // stars
          for (int j = 0; j < n-i; j++){
              printf("* ");
          }
        printf("\n");
    }
        int start = 2 * n -2 ;
        for (int i = 0; i < n; i++) {
      // stars
      for (int j = 0; j <= i; j++){
          printf("* ");
      }
        // spaces
        for (int j = 0; j < start ; j++){
            printf(" ");
        }

          // stars
          for (int j = 0; j <= i; j++){
              printf("* ");
          }
        printf("\n");
        start-=2;
    }
}
int main() {
    // Write C code here
    pattern(4);

    return 0;
}