#include <stdio.h>

void pattern(int n) 
{
    for (int i=0; i<n; i++) 
    {
        for(int j=0; j<n; j++)
        {
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