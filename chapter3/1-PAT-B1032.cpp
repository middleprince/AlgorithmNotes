#include <cstdio>
#include <cstring>
#define MAXN 100010

extern int school[MAXN];

int main(void)
{
    memset(school, 0, sizeof(school));
    int n, index, score;
    if(scanf("%d", &n) == EOF)
        return -1;
    while(n--){
        scanf("%d %d", &index, &score);
        school[index] += score;
    }
    
    int sno = 0, max = -1;
    for(int i=0; i<MAXN; i++){
        if(school[i] >max){
           max = school[i];
           sno = i;
        }
    }

    printf("%d %d\n", sno, school[sno]);
    return 0;
}
