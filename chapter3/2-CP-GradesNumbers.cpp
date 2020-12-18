#include <cstdio>

int main()
{
    int N; 
    while(scanf("%d", &N), N != 0){
        int grades[100]={0}; 
        int temp=0, who=0;
        while(N--){
            scanf("%d", &temp);
            grades[temp]++; 
        } 
        scanf("%d",&who);
        printf("%d\n", grades[who]);
    }
    return 0;
}
