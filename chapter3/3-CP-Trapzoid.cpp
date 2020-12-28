#include <cstdio>

void drawLine(int base, int dots)
{
    int blank = base - dots;
    while(blank--){
        printf(" "); 
    }
    while(dots--){
        printf("*"); 
    }
    printf("\n");
}

int main()
{
    int h;
    while(scanf("%d", &h) != EOF){
        int base = (h-1) * 2 + h;
        for(int i=0; i<h; ++i){
            drawLine(base, h+i*2);
        }
    }
    return 0;
}
