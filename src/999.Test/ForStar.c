#include <stdio.h>
int main()
{
    int i, j, k;
    int num;
    
    printf("별의 갯수를 입력하세요 : ");
    scanf("%d", &num);
    
    for (i = 0; i < num; i++)
    {
        for(k = 0; k < num - i - 1; k++)
        {
            printf(" ");
        }
        
        for(j = 0; j < i * 2 + 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    //    *
    //   ***
    //  *****
    // *******
    //*********
}