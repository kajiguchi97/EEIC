#include <stdio.h>
#include <math.h>

double f(double);
double dfdx(double);
double newton(double);

int main(void){
    double x0 = 1.0;
    double solution = newton(x0);
    printf("solution is %f\n", solution);
    return 0;
}

double f(double x){
    return exp(x) + x;
}
double dfdx(double x){
    return exp(x) + 1;
}
double newton(double x){
    double a = x;
    double b = 0;
    while(fabs(a-b) > 0.0001){
        b = a;
        a = b - f(b)/dfdx(b);
    }
    return a;
}