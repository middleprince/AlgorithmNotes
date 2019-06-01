/*注意！以数组排序之后为位置来计算名次*/
#include <cstdio>
#include <algorithm>
#include <cstring>
#define MAX 30020
using namespace std;

typedef struct student Sstudents;
struct student{
    char id[15];
    int score;
    int locationNumber;
    int localRank;
}cspat[MAX];

bool cmp( Sstudents a, Sstudents b)
{
    if(a.score != b.score)
        return a.score > b.score;
    else
        return strcmp(a.id, b.id) < 0;
}

int main (void)
{
    int n, number = 0;
    if(scanf("%d", &n) !=EOF && n>0){
        for(int i=1; i<=n; i++){
            int item;
            if(scanf("%d", &item)==EOF || item<=0)
                return -1;

            for(int j=0; j<item; j++){
                scanf("%s %d",cspat[number].id, &cspat[number].score); 
                cspat[number++].locationNumber = i;
            }
            sort(cspat+number-item, cspat+number, cmp);

            cspat[number-item].localRank = 1; 
            for(int k=number-item+1; k<number; k++){
                if( cspat[k].score == cspat[k-1].score)
                    cspat[k].localRank = cspat[k-1].localRank; 
                else
                    cspat[k].localRank = k + 1 - (number-item); 
                    //k在所有的学生中的绝对位置，而此刻算队内内的名次：k-（number-iterm）为队内
                    // 相对的位移量。
            }
        }
        printf("%d\n", number);
        
        sort(cspat, cspat+number, cmp);
        int globalRank = 1;
        for(int i=0; i<number; i++){
            if( i>0 && cspat[i].score != cspat[i-1].score)
                globalRank = i + 1; 
            
            printf("%s %d %d %d\n", cspat[i].id, globalRank, 
             cspat[i].locationNumber, cspat[i].localRank); 
        }
    }
    

}
