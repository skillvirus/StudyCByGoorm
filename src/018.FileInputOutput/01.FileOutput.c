#include <stdio.h>
#define FilePath "/workspace/ProgrammingC/src/018.FileInputOutput/Files/a.txt"
int main() {
    FILE *fp;
    //fp = fopen("/workspace/ProgrammingC/src/018.FileInputOutput/a.txt", "w"); //절대경로(define 키워드 미사용)
    fp = fopen(FilePath, "w"); //define 키워드 미사용
    
    if (fp == NULL) {
        printf("Write Error!!\n");
        return 0;
    }

    fputs("Hello World!!!\n", fp);
    fclose(fp);    
    
    return 0;
}