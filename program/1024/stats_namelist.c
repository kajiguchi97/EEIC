#include <stdio.h>
#include <math.h>
int line(); //行数調べ
void stats(double v[], int l, double *pave, double *pmax, double *pmin, double *pstd); //各種データ計算
int l; //行数
FILE *fp;

int main(int argc, char *argv[]) {
    fp = fopen(argv[1], "r");
    l = line(); //行数代入
    double sum = 0, ave = 0, max = 0, min = 1000, std = 0;
    char name[50];
    double age0, height0, weight0; //データ１つ１つ
    double age[l], height[l], weight[l]; //データ格納
    fp = fopen(argv[1], "r");
    if(fp == NULL) {
        printf("Failed open\n");
        return 1;
    }
    int i = 0;
    while(fscanf(fp, "%[^,], %lf, %lf, %lf\n", name, &age0, &height0, &weight0) != EOF){
        age[i] = age0;
        height[i] = height0;
        weight[i] = weight0;
        i++;
    }
    stats(age, l, &ave, &max, &min, &std);
    printf("Age:(max,min,mean,stdev) = (%lf, %lf, %lf, %lf)\n", max, min, ave, std);
    stats(height, l, &ave, &max, &min, &std);
    printf("Height:(max,min,mean,stdev) = (%lf, %lf, %lf, %lf)\n", max, min, ave, std);
    stats(weight, l, &ave, &max, &min, &std);
    printf("Weight:(max,min,mean,stdev) = (%lf, %lf, %lf, %lf)\n", max, min, ave, std);
    fclose(fp);
    return 0;
}

//行数調べ関数
int line(){
    int c;
    int l = 0;
    while ((c = fgetc(fp)) != EOF){
        if(c == '\n'){
            l++;
        }
    }
    printf("%d\n", l+1);
    return l+1;
}
//各種データ計算関数
void stats(double v[], int l, double *pave, double *pmax, double *pmin, double *pstd){
    double sum = 0, max = 0, min = 1000, ave = 0, sum2 = 0, std = 0;
    int i;
    double k;
    for(i = 0; i < l; i++){
        sum = sum + v[i]; //sum
        if(max < v[i]){ //max
            max = v[i];
        }
        if(min > v[i]){ //min
            min = v[i];
        }
    }
    ave = sum / l; //average
    for(i = 0; i < l; i++){ //std
        k = v[i] - ave;
        sum2 += k*k;
    }
    std = sqrt(sum2 / l);
    
    *pave = ave;
    *pmax = max;
    *pmin = min;
    *pstd = std;
}