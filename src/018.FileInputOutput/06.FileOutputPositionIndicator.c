//출력 스트림 파일 위치 지정자
#include <stdio.h>
#define FilePath "/workspace/ProgrammingC/src/018.FileInputOutput/Files/c.txt"

int main() {
    FILE *fp = fopen(FilePath, "w");
    fputs("C programming is so fun", fp);
    fseek(fp, 0, SEEK_SET); //파일 위치 지정자 초기화
    fputs("is C programming", fp); //이전의 내용에 덮어쓰기
    fclose(fp);
    
    return 0;
}