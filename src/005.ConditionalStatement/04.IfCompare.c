#include <stdio.h>

int main() 
{
    int i, j;

    printf("크기를 비교할 2개의 수중 첫번째 수를 입력해 주세요 : ");
    scanf("%d", &i);
    printf("크기를 비교할 2개의 수중 두번째 수를 입력해 주세요 : ");
    scanf("%d", &j);

    if (i > j)  //i 가 j 보다 크면
    {
        printf("%d 는 %d 보다 큽니다 \n", i, j);
    }
    if (i < j)  //i 가 j 보다 작으면
    {
        printf("%d 는 %d 보다 작습니다 \n", i, j);
    }
    if (i >= j)  //i 가 j 보다 크거나 같으면
    {
        printf("%d 는 %d 보다 크거나 같습니다 \n", i, j);
    }
    if (i <= j)  //i 가 j 보다 작거나 같으면
    {
        printf("%d 는 %d 보다 작거나 같습니다 \n", i, j);
    }
    if (i == j)  //i 와 j 가 같으면
    {
        printf("%d 는 %d 와(과) 같습니다 \n", i, j);
    }
    if (i != j)  //i 와 j 가 다르면
    {
        printf("%d 는 %d 와(과) 다릅니다 \n", i, j);
    }

    return 0;
}