//fscanf 이용하기
#include <stdio.h>
#define FilePath "/workspace/ProgrammingC/src/018.FileInputOutput/Files/some_data.txt"

int main() {
    FILE *fp = fopen(FilePath, "r");
    char data[100];

    if (fp == NULL) {
        printf("파일 열기 오류! \n");
        return 0;
    }

    printf("---- 입력 받은 단어들 ---- \n");

    while (fscanf(fp, "%s", data) != EOF) { //fscanf는 띄어쓰기(space), 탭문자(\t), 개행문자(\n) 중 하나가 나올 때까지 입력 받음
        printf("%s \n", data);
    }

    fclose(fp);
    
    return 0;
}