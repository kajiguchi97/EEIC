#include <stdio.h>
int main(){
    char *name = "Hello world";
    int age = 25;
    FILE *fp = fopen("users.txt", "a");
    if(fp == NULL){
        printf("Failed opening\n");
        return 1;
    }
    if(0 > fprintf(fp, "name = %s, age = %d\n", name, age)){
        printf("Failed writing\n"); 
    }
    fclose(fp);
    return 0;
}