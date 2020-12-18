#include <cstdio>

int main()
{
    int n , a;
    while(scanf("%d", &n) != EOF){
        int even = 0, odd = 0;
        while(n--){
            scanf("%d", &a); 
            even += a%2 == 0 ? 1 : 0;
            odd += a%2 == 0 ? 0 : 1;
        } 
        if(even > odd) printf("NO\n");  
        else printf("YES\n");
    }
    return 0;
}
