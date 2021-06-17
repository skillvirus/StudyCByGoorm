//파일에서 문자를 하나씩 입력 받음
#include <stdio.h>
#define FilePath "/workspace/ProgrammingC/src/018.FileInputOutput/Files/some_data.txt"

int main() {
    FILE *fp = fopen(FilePath, "r");
    char c;

    if (fp == NULL) {
        printf("file open error ! \n");
        return 0;
    }

    while ((c = fgetc(fp)) != EOF) {
        printf("%c", c);
    }
    
    printf("\n");
    
    return 0;
}