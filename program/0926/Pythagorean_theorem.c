#include <stdio.h>
int main() {
    for(int i = 1; i < 1000; i++){
        for(int j = i; j < 1000; j++){
            for(int k = j; k < 1000; k++){
                if(i*i + j*j == k*k){
                    printf("%d^2 + %d^2 = %d^2\n",i,j,k);
                }
            }
        }
    }
}