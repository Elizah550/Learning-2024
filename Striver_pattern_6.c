// Online C compiler to run C program online
#include <stdio.h>

void pattern(int n) 
{
    for (int i=0; i<n; i++) 
    {
        //space
        for(int j=0; j<n-i+1; j++)
        {
            printf(" ");
        }
        //star
        for(int j=0; j<2*i+1; j++)
        {
            printf("*");
        }
        //space
        for(int j=0; j<n-i+1; j++)
        {
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