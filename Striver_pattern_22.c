#include <stdio.h>

void pattern(int n) 
{
   for (int i = 0; i < 2 * n -1; i++) 
    {
      for (int j = 0; j < 2 * n -1 ; j++) {
          int top =i;
          int left =j;
          int right = (2 *n - 2) - j;
          int bottom = (2 *n - 2) - i;
          printf("%d", n - min(min(top,bottom),min(left,right)));
      }
      printf("\n");
    }
}
int main() {
    // Write C code here
    pattern(4);

    return 0;
}