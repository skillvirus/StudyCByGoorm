#define arrayCount 5

void ViewArr(int *arr, int n); //현재 배열의 상태 출력 함수
void Swap(int *a, int *b); //위치 교환 함수

int arr[arrayCount] = {4, 3, 5, 2, 1};

void ViewArr(int *arr, int n) {
    int i = 0;
    for (i = 0; i<n; i++) {
        printf("%3d ", arr[i]);
    }
    printf("\n");
}

void Swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}