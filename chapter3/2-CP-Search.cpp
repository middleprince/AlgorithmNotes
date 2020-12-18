#include <cstdio>
#include <cstring>

// TODO: Fix the Runtime Error problem.
int main()
{
    int N, M, tmp, query;
    while(~scanf("%d", &N)){
        bool a[120] = {false};
        while(N--){
            scanf("%d", &tmp); 
            a[tmp] = true;
        }
        scanf("%d", &M);
        while(M--){
            scanf("%d", &query);
            if(a[query])
                printf("YES\n");
            else
                printf("NO\n");
        }
    }
    return 0;

}

