#include <stdio.h>
#include "human.h"
int main() {
    struct Human Lee = Create_Human("Song", 46, MALE);

    Print_Human(&Lee);

    return 0;
}