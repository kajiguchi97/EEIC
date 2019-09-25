#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// ./a.out (int)50 (int)30
// 確率q(%), ステップ数n
int main(int argc, char **argv){
  double q = atof(argv[1]); //確率(%)
  int n = atoi(argv[2]); //ステップ数
  int x = 0; //変位
  srand((unsigned)time(NULL));
  for(int i = 0; i < n; i++){
    if(x % 2 == 0){
      if(rand()%100 <= q) x++;
      else x--;
    }else{
      if(rand()%100 <= 50) x++;
      else x--;
    }
    // printf("%d x = %d\n", i, x);
  }
//   printf("after %d steps, x  = %d\n", n, x);
  printf("%f", (double)x/n);
  return x/n;
}