#include <cstdio>
#include <algorithm>
#define MAX 101

using namespace std;

bool cmp(int a, int b)
{
    return a < b;
}

int main(void)
{
    int toSort[MAX], n; 
    while(scanf("%d", &n) != EOF && n != 0){
        for(int i=0; i<n; i++)
            scanf("%d", &toSort[i]);
        sort(toSort, toSort+n, cmp);
        for(int j=0; j<n; j++){
            printf("%d ", toSort[j]);
        }
        printf("\n");
    }
    return 0;
}
