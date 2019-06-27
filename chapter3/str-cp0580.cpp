/* revers the stirng*/

#include <cstdio>
#include <cstring>
#define MAX 201

int main(void)
{
    char ss[MAX];
    int len=0;
    while(scanf("%c", &ss[len]) != EOF){
        if(ss[len] == '\n'){
            for(int j=len; j>=0; j--)
                printf("%c", ss[j]);
            printf("\n");
            len = 0;
        }else
            ++len;
    }
    return 0;
}
