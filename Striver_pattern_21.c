#include <stdio.h>

void pattern(int n) 
{
 for(int i= 0; i<n;i++)
    {
      for (int j = 0; j < n; j++) {
      if(i == 0 || j == 0  || i == n-1 || j == n-1 ) printf("*");
      else printf(" ");
        }
        printf("\n");
      }
}
int main() {
    // Write C code here
    pattern(4);

    return 0;
}