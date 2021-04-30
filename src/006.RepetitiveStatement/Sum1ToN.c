#include <stdio.h>
int main() 
{
    int i, toNum = 20, sum = 0;
    for (i = 1; i <= toNum; ++i)
    {
        //sum = sum + i;
        sum += i;
    }
    printf("1 부터 %d 까지의 합 : %d \n", toNum, sum);

    return 0;
}