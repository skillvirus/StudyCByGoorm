#include <stdio.h>
#define FilePath "/workspace/ProgrammingC/src/018.FileInputOutput/Files/a.txt"

int main() {
    FILE *fp = fopen(FilePath, "r");
    char buf[20];
    
    if (fp == NULL) {
        printf("READ ERROR !! \n");
        return 0;
    }
    
    fgets(buf, 20, fp);
    printf("파일 입력 내용 : %s \n", buf);
    fclose(fp);
    
    return 0;
}