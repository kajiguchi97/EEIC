#include <stdio.h>
#include <math.h>
int main() {
    double k = 0;
    for(int i = 1; i < 100; i++){
        int u = i * i * pow(2, i-1);
        double j = 1.0/u;
        k += j;
    }
    double pppi = k + pow(log(2), 2);
    printf("(pi^2)/6 = %f\n", pppi);
    double pi = sqrt(6 * pppi);
    printf("pi = %f\n", pi);
    return 0;
}