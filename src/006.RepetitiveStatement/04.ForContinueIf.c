#include <stdio.h>
int main() 
{
    int i;

    for (i = 0; i < 100; i++) 
    {
        if (i % 5 == 0) 
        {
            continue;
        }

        printf("%d ", i);
    }
    printf("\n");

    return 0;
}