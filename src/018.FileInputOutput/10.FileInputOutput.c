//fopen 의 "r+" 인자 이용해보기
#include <stdio.h>
#define FilePath "/workspace/ProgrammingC/src/018.FileInputOutput/Files/some_data2.txt"

int main() {
    FILE *fp = fopen(FilePath, "r+"); //r+ : 읽기 및 쓰기 형식으로 open(파일이 존재하지 않으면 open 하지 않음)
    char data[100];

    fgets(data, 100, fp);
    printf("현재 파일에 있는 내용 : %s \n", data);

    fseek(fp, 5, SEEK_SET);

    fputs("is nothing on this file", fp); //이전에 있던 내용은 무시하고 문자열의 크기만큼 덮어 씌움

    fclose(fp);
    
    return 0;
}