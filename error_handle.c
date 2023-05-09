#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

extern int errno;

int main() {
    FILE *fp = fopen("test.txt", "r");

    if((fp == NULL)) {
        printf("errno=%d\n", errno);
        exit(1);
    }
    fclose(fp);
}