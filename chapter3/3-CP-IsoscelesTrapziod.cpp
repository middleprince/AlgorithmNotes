#include <cstdio>
#include <cstring>

int main()
{
    int M, h, black;
    scanf("%d", &M);
    
    while(M--)
    {
        scanf("%d", &h); 
        black = h-1;
        for(int i=0; i<h; i++, black--)
        {
            int points = h + i * 2;
            int tmp = black; 
            while(tmp--) 
                printf(" ");
            while(points--)
                printf("*");
            printf("\n");
        }
    }

    return 0;
    
}
