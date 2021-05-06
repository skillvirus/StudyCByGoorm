#include <stdio.h>
int main()
{
    int arrSize = 10;
    //int arr[arrSize] = {1,2,3,4,5,6,7,8,9,10};
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int i;    
    
    for (i = 0; i < 10; i++)
    {
        printf("%d 번째 배열 : %d \n", i + 1, arr[i]);
    }
    
    return 0;
}
