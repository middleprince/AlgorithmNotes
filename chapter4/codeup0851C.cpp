#include <cstdio>
#include <algorithm>
#include <cstring>
#define MAX 100020

using namespace std;

typedef struct students Sstudents;

struct students{
    int sno;
    char name[9];
    int score; 
};

bool cmpNo(Sstudents a, Sstudents b)
{
    return a.sno < b.sno;
}

bool cmpScore(Sstudents a, Sstudents b)
{
    if(a.score == b.score)
        return a.sno < b.sno;
    return a.score < b.score;
}

bool cmpName(Sstudents a, Sstudents b)
{
    int k;
    k = strcmp(a.name, b.name);
    if(k == 0)
        return a.score < b.score;
    return k;
}


int main(void)
{
    Sstudents toSort[MAX];
    int  n, type; 
    while(scanf("%d %d", &n, &type)!=EOF && n!=0 && type>0 && type<4){
        for(int i=0; i<n; i++)
            scanf("%d %s %d", &toSort[i].sno, toSort[i].name
                    , &toSort[i].score);
        switch(type){
            case 1: sort(toSort, toSort+n, cmpNo);
                    break;
            case 2: sort(toSort, toSort+n, cmpName);
                    break;
            case 3: sort(toSort, toSort+n, cmpScore);
                    break;
            default:
                   return -1;
        }

        printf("Case %d:\n", type);
        for(int j=0; j<n; j++){
            printf("%.6d %s %d\n", toSort[j].sno, toSort[j].name,
                    toSort[j].score);
        }
    }
    return 0;
}
