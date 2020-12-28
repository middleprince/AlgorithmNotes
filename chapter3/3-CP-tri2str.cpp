#include<cstdio>
#include<cstring>

int main()
{
    int N;
    if(scanf("%d", &N) == EOF)
        return 0;
   
    int black = 0; 
    for(int i=N ; i>0; i--, black++)
    {
        int points = i;
        int tmp = black;
        while(tmp--)
            printf(" ");
        while(points--)
        {
            printf("*");
            printf(" ");
        } 
        printf("\n"); 
            
    }
    
    black = N - 2;
    for(int i=2; i<=N; i++, black--)
    {
        int points = i; 
        int tmp = black;
        while(tmp--)
            printf(" ");
        while(points--)
        {
            printf("*"); 
            printf(" "); 
        }
        printf("\n");
    }

    return 0;
}
