#include <stdio.h>

void pattern(int n) 
{
   int Spaces = 2 * n - 2;
    for (int i = 1; i<= 2*n-1; i++) {
    int stars= i;
    if (i > n) stars= 2*n-i;
    //Stars
    for(int j = 1; j<=stars; j++){
        printf("* ");
      }
    //Spaces
    for(int j = 1; j<=Spaces; j++){
        printf(" ");
      }
    //Stars
    for(int j = 1; j<=stars; j++){
        printf("* ");
      }
    printf("\n");
    if(i<n) Spaces-=2;
    else Spaces+=2;
    } 
}
int main() {
    // Write C code here
    pattern(4);

    return 0;
}