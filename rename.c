#include<sys/stat.h>
#include<stdlib.h>
#include<stdio.h>

int main() {
    if (rename("han", "bit") == -1) { // char *oldpath, char *newpath
        perror("rename");
        exit(1);
    }
}