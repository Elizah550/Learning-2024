#include <stdio.h>

void pattern(int n) 
{
    for (int i = 0; i < n; i++) {
        // Start from 'C' and go backwards to 'C' - i
        for (char ch = 'C'; ch >= 'C' - i; ch--) {
            printf("%c ", ch); // Print character followed by a space
        }
        printf("\n");
    }
}
int main() {
    // Write C code here
    pattern(4);

    return 0;
}