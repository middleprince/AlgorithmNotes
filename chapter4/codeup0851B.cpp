#include <cstdio>
#include <algorithm>
#define MAX 1001

using namespace std;

bool cmp(int a, int b)
{
    return a < b;
}

int main(void)
{
    int toSort[MAX], n; 
    while(scanf("%d", &n) != EOF && n != 0){
        if(n == 1){
            scanf("%d", &toSort[0]);
            printf("%d\n", toSort[0]); 
            printf("-1\n");
            continue;
        }
        for(int i=0; i<n; i++)
            scanf("%d", &toSort[i]);
        sort(toSort, toSort+n, cmp);
        
        printf("%d\n", toSort[n-1]);
        for(int j=0; j<n-1; j++){
            printf("%d ", toSort[j]);
        }
        printf("\n");
    }
    return 0;
}
