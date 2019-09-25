#include <stdio.h>
#include <string.h>
void uppercase(char* s);
int main(){
    char s[] = "hello world";
    uppercase(s);
    printf("%s\n", s);
    return 0;
}

void uppercase(char* s){
    int len = strlen(s);
    // printf("%d\n", len);
    for(int i = 0; i < len; i++){
        if(s[i] != ' '){
            s[i] -= 32;
        }
    }
}