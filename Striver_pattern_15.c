#include <stdio.h>

void pattern(int n) 
{
       for (int i = 0; i<n; i++){
        for(char ch = 'A' ; ch<= 'A'+(n-i-1); ch ++)
        {
            printf("%c ", ch);
        }
        printf("\n");
    }
}
int main() {
    // Write C code here
    pattern(4);

    return 0;
}