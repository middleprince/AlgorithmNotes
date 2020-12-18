#include <cstdio>
#include <cstring>

int path[100008] = {0};

int main()
{
    int M, N, a, b;
    memset(path, 0, sizeof(path));

    scanf("%d", &M);
    for(int i=1; i<=M; ++i){
        scanf("%d", path+i);
        path[i] += path[i-1];
    }
    
    scanf("%d", &N);
    while(N--){
       scanf("%d %d", &a, &b); 
       int distances = 0, cycle = 0;
       if(a>b){
           int temp = b;
           b = a;
           a = temp;
       }
    
    // FIXED:lime limt exceed
       distances = path[b-1] - path[a-1]; 
       cycle = path[M] - path[b] + path[b] - path[b-1] + path[a-1];
       distances = distances < cycle ? distances : cycle; 
       printf("%d\n", distances);  
    }
    return 0;
}
