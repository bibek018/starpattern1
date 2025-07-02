/*       Star patterns:
        55555
        4444
        333
        22
        1

                  */
#include <stdio.h>

int main() {

    for (int i = 5; i >0; i--)
    {
        for(int j = i; j > 0; j--)
        {
            printf("%d", i);
        }
        printf("\n");
    }
    
    return 0;
}