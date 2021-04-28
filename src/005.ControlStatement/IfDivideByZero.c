#include <stdio.h>

int main() 
{
    double i, j;
    printf("나눗셈을 하고 싶은 2개의 수 중 첫번째 수를 입력하세요 : ");
    scanf("%lf", &i);
    printf("나눗셈을 하고 싶은 2개의 수 중 두번째 수를 입력하세요 : ");
    scanf("%lf", &j);

    if (j == 0) 
    {
        printf("0 으로 나눌 수 없습니다. \n");
        return 0;
    }

    printf("%f 를 %f 로 나눈 결과는 : %f \n", i, j, i / j);

    return 0;
}