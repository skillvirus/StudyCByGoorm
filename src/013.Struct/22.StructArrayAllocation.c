#include <stdio.h>
#include <stdlib.h>
struct Something {
    int a, b;
};
int main() {
    struct Something *arr;
    int size, i;

    printf("원하는 구조체 배열의 크기 : ");
    scanf("%d", &size);

    arr = (struct Something *)malloc(sizeof(struct Something) * size);

    for (i = 0; i < size; i++) {
        printf("arr[%d].a : ", i);
        scanf("%d", &arr[i].a);
        printf("arr[%d].b : ", i);
        scanf("%d", &arr[i].b);
    }

    printf("\n");
    
    for (i = 0; i < size; i++) {
        printf("arr[%d].a : %d, arr[%d].b : %d \n", i, arr[i].a, i, arr[i].b);
    }

    free(arr);

    return 0;
}