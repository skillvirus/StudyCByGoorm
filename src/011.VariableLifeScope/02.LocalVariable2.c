#include <stdio.h>
int main() {
    int a = 3;
    {
        int a = 4;
        printf("a = %d \n", a);
    }

    printf("a = %d \n", a);
}