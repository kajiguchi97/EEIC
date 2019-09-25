#include <stdio.h>
int is_prime(int); //引数が素数の場合１、それ以外の場合０を返す
int main() {
    int i;
    printf("2 is prime\n");
    for (i = 3; i <= 1000; i++){
        if(is_prime(i) == 1){
            printf("%d is prime\n", i);
        }
    }
}
int is_prime(int n){
    for(int i = 2; i < n; i++){
        if(n % i == 0){
            return 0;
            break;
        }
    }
    return 1;
}
