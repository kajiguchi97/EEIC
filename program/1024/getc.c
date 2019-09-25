#include <stdio.h>
int main(){
    FILE *fp;
    fp = fopen("sentence.txt", "r");
    if(fp == NULL){
        printf("Failed\n");
        return 1;
    }
    int tmp;
    char c;
    while((tmp = getc(fp)) != EOF){
        c = (char)tmp;
        printf("%c", c);
    }
    fclose(fp);
    return 0;
}