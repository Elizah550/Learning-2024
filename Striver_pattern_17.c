#include <stdio.h>

void pattern(int n) 
{
    for(int i=0;i<n;i++){
     //space
      for (int j = 0; j < (n - i) - 1; j++) {
        printf(" ");
        }
    //character
    char ch = 'A';
    int breakpoint =  (2 * i + 1) / 2;
      for (int j = 1; j <= (2 * i) + 1; j++) {
        printf("%c ",ch);
        if( j<= breakpoint) {
            ch++;
        }
        else ch--;
    }
    //space
      for (int j = 0; j < (n - i) - 1; j++){
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