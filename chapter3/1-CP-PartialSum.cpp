#include <cstdio>
#include <cstring>
#include <cmath>

int main()
{
    char stra[12]={' '};
    char strb[12]={' '};
    int da, db;
    while(scanf("%s %d %s %d", stra, &da, strb, &db) != EOF){
        int cnt_a = 0, cnt_b = 0;
        long pa = 0, pb = 0;
        
        for(size_t i=0; i<strlen(stra); ++i)
            pa += stra[i] == '0'+da ? da*pow(10, cnt_a++) : 0;
        
        for(size_t i=0; i<strlen(strb); ++i)
            pb += strb[i] == '0'+db ? db*pow(10, cnt_b++) : 0;

        printf("%ld\n", pa+pb);
    }
    return 0;
}
