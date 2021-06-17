#include <stdio.h>
//#define FilePath "/workspace/ProgrammingC/src/018.FileInputOutput/Files/a.txt" //절대경로
//#define FilePath "a.txt" //실행 시점의 현재 디렉토리에 생성
#define FilePath "Files/a.txt" //상대경로

int main() {
    FILE *fp;
    fp = fopen(FilePath, "w"); //define 키워드 미사용
    
    if (fp == NULL) {
        printf("Write Error!!\n");
        return 0;
    }

    fputs("Hello World!!!\n", fp);
    printf("파일 출력 완료\n");
    fclose(fp);    
    
    return 0;
}