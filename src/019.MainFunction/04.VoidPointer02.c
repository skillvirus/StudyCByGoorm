#include <stdio.h>
int main() {
    void *a;
    double b = 123.3;

    a = &b;

    printf("%lf \n", *(double *)a); //double type의 포인터로 형변환
    return 0;
}