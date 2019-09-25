#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    int c;
    int n;
} monomial_t;
monomial_t *constuct_monomial(int c, int n){
    monomial_t m = {4, 10};
    return &m;
}
void diff_monomial(monomial_t *m){
    m->c *= m->n;
    m->n -= 1;
}
void print_monomial(monomial_t *m){
    printf("%d*x^%d\n", m->c, m->n);
}

int main(){
    struct monomial *m1;
    print_monomial(m1);
    diff_monomial(m1);
    print_monomial(m1);
    return 0;
}