#include <stdio.h>
int main() {
    int n = 158340421;
    for(int i = 1; i < 1000; i++){
        int m = i*i*i;
        if(m == n){
            printf("%d\n",i);
            break;
        }
    }
}