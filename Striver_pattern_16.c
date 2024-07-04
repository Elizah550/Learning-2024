#include <stdio.h>

void pattern(int n) 
{
           for (int i = 0; i<n; i++){
        char ch = 'A' + i;
        for(int j = 0 ; j<=i; j++)
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