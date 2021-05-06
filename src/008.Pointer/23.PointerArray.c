#include <stdio.h>
int main() {
    int* arr[3];
    int a = 1, b = 2, c = 3;
    arr[0] = &a;
    arr[1] = &b;
    arr[2] = &c;

    printf("a : %d, *arr[0] : %d \n", a, *arr[0]);
    printf("b : %d, *arr[1] : %d \n", b, *arr[1]);
    printf("c : %d, *arr[2] : %d \n", c, *arr[2]);

    printf("&a : %p, arr[0] : %p \n", &a, arr[0]);
    
    return 0;
}