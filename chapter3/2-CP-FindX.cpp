#include <cstdio>
#include <cstring>

int main()
{   
    int a[220];
    int N, temp, who;

    while(scanf("%d", &N) != EOF){
        memset(a, -1, sizeof(a));
        for(int i=0; i<N; ++i){
            scanf("%d", &temp); 
            a[temp] = i;
        }
        scanf("%d", &who);
        
        printf("%d\n", a[who]);
    }
}
