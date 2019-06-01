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

int type;



bool cmp(Sstudents a, Sstudents b)
{
    int k;
    if(type == 1)
        return a.sno < b.sno;
    else if(type == 2){
        k = strcmp(a.name, b.name);
        if(k == 0)
            return a.sno < b.sno;
        return k;
    }else{
        if(a.score == b.score) 
            return a.sno < b.sno;
        return a.score < b.score;
    }
        
}



int main(void)
{
    Sstudents toSort[MAX];
    int  n; 
    while(scanf("%d %d", &n, &type)!=EOF && n!=0 && type>0 && type<4){
        for(int i=0; i<n; i++)
            scanf("%d %s %d", &toSort[i].sno, toSort[i].name, &toSort[i].score);

        sort(toSort, toSort+n, cmp);
                
         printf("Case %d:\n", type);
        
        for(int j=0; j<n; j++){
            printf("%.6d %s %d\n", toSort[j].sno, toSort[j].name, toSort[j].score);
        }
    }
    return 0;
}
