#include <stdio.h>
int main() {
    char word[30] = {"Long Sentence"};
    char *str = word;

    printf("%s \n", str);

    return 0;
}