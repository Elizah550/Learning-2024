#include <stdio.h>

void pattern(int n) 
{
      int num = 1; 
    for(int i =1; i<=n;i++)
    {  
        for(int j = 1;j<=i;j++)
        {
          printf("%d ",num);
          num = num + 1;
        }
        printf("\n");
    }
}
int main() {
    // Write C code here
    pattern(4);

    return 0;
}