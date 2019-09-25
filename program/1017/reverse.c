#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void reverse(char* s);

int main(){
    char s[] = "hello";
    reverse(s);
    printf("%s\n", s);
    return 0;
}

void reverse(char* s){
    int len = strlen(s);
    // printf("%d\n", len);
    char* t = (char*)malloc(sizeof(char)*(len + 1)); //配列の長さ指定の[]の中に変数を入れないで
    strcpy(t, s);
    // printf("%s\n", t);
    for(int i = 0; i < len; i++){
        // printf("%c\n", t[len - i]);
        s[i] = t[len - i - 1];
    }
}