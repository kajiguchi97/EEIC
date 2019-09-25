#include <stdio.h>
#include <math.h>
int is_prime(int); //引数が素数の場合１、それ以外の場合０を返す
int is_prime(int n){
    for(int i = 2; i < n; i++){
        if(n % i == 0){
            return 0;
            break;
        }
    }
    return 1;
}

int main() {
    int i;
    double k = 1 - 1.0/(2*2);
    for (i = 3; i <= 10000; i++){
        if(is_prime(i) == 1){
            double j = 1-1.0/(i*i);
            k *= j;
        }
    }
    double pi = sqrt((1.0 / k) * 6);
    printf("pi = %f\n", pi);
}