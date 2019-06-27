#include<stdio.h>
#define MAXN 100010


int school[MAXN] = {0};

int main(void)
{
    int n, index, score;
    if(scanf("%d", &n) == EOF)
        return -1;
    while(n--){
        scanf("%d %d", &index, &score);
        school[index] += score;
    }
    
    int sno, max = -1;
    for(int i=0; i<MAXN; i++){
        if(school[i] >max){
           max = school[i];
           sno = i;
        }
    }

    printf("%d %d\n", sno, school[sno]);
    return 0;
}
