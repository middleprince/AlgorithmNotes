#include <cstdio>
#include <cstring>

int tree[10001] = {0};
int main()
{
    int m, n, a, b;
    while(scanf("%d %d", &m, &n) != EOF){
        if(!m || !n) continue;
        memset(tree, 0, sizeof(tree));
        int sum = m+1;
        while(n--){
            scanf("%d %d", &a, &b); 
            for(int i=0; i<b-a+1; ++i)
                tree[a+i] = 1;
        } 
        for(int i=0; i<=m; ++i)
            sum -= tree[i];  
        printf("%d\n", sum);
    }
    return 0;
}
