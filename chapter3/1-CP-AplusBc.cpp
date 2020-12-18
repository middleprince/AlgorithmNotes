#include <cstdio>

int main()
{
    int N; 
    long a, b, c; 
    scanf("%d", &N);
    for(int i=1; i<=N; ++i){
        scanf("%ld %ld %ld", &a, &b, &c); 
        if(a+b > c) 
            printf("Case #%d: true\n", i);
        else
            printf("Case #%d: false\n", i);
    } 
    
    return 0;
}
