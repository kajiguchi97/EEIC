#include <stdio.h>
#define MAX_LEN 100
int main() {
    char buffer[MAX_LEN];
    FILE *fp;
    fp = fopen("sentence.txt", "r");
    if(fp == NULL) {
        printf("Failed\n");
        return 1;
    }
    while(fgets(buffer, MAX_LEN, fp) != NULL){
        printf("%s", buffer);
    }

    fclose(fp);
    return 0;
}