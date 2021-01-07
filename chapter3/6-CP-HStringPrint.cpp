#include<cstdio>
#include<cstring>

#define MAXN 100
#define MAXW 21

int main()
{
    int m;
    scanf("%d", &m);
    char inputs[MAXN][MAXW];
    int i=0;
    while(m--)
    {
        scanf("%s", inputs[i++]);
    }
    int item = i;
    for(int i=0; i<item; ++i)
    {
        for(int j=i, k=1; j>=0 && k<=4; --j, ++k)
            printf("%d=%s ", k, inputs[j]);
        printf("\n");
    }


    return 0;
}
