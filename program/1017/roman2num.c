#include <stdio.h>
#include <string.h>
int roman2num(char*);
int main(){
    printf("XIV = %d\n", roman2num("XIV")); //14
    printf("CDXCV = %d\n", roman2num("CDXCV")); //495
    printf("MCMXLV = %d\n", roman2num("MCMXLV")); //1945
    printf("MMMCMXCIX = %d\n", roman2num("MMMCMXCIX")); //3999
    return 0;
}
int roman2num(char* s){
    int len = strlen(s); 
    int sum = 0;
    char rnum[] = "MDCLXVI";
    int anum[] = {1000, 500, 100, 50, 10, 5, 1};
    for(int i = 0; i < len; i++){
        switch(s[i]){
            case 'M':
                sum += anum[0];
                break;
            case 'D':
                sum += anum[1];
                break;
            case 'C':
                if((s[i+1] == rnum[0]) || (s[i+1] == rnum[1])){
                    sum -= anum[2];
                }else{
                    sum += anum[2];
                }
                break;
            case 'L':
                sum += anum[3];
                break;
            case 'X':
                if((s[i+1] == rnum[2]) || (s[i+1] == rnum[3])){
                    sum -= anum[4];
                }else{
                    sum += anum[4];
                }
                break;
            case 'V':
                sum += anum[5];
                break;
            case 'I':
                if((s[i+1] == rnum[4]) || (s[i+1] == rnum[5])){
                    sum -= anum[6];
                }else{
                    sum += anum[6];
                }
                break;
            default:
                break;
        }
    }
    return sum;

}