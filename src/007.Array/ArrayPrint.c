#include <stdio.h>
int main() 
{
    int arr[10] = {2, 10, 30, 21, 34, 23, 53, 21, 9, 1};
    int i;
    for (i = 0; i < 10; i++) 
    {
        printf("배열의 %d 번째 원소 : %d \n", i + 1, arr[i]);
    }
    return 0;
}