#include <stdio.h>
double Legendre(int n, double x);

int main(void){
    double a = Legendre(16, 0.5);
    double b = Legendre(32, 0.7);
    printf("P_16(0.5)=%f\n", a);
    printf("P_32(0.7)=%f\n", b);
    return 0;
}

double Legendre(int n, double x){
    if(n==0){
        return 1;
    }else if(n==1){
        return x;
    }else{
        return ((2 * n - 1) * x * Legendre(n-1,x) - (n - 1) * Legendre(n-2, x)) / n;
    }
}