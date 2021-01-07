#include<cstdio>
#include<cstring>

#define MAX 256
int main()
{
    char inputs[MAX];
    while(scanf("%s",inputs) != EOF) 
    {
        int i=0, j=strlen(inputs)-1;
        for( ; i<j && inputs[i] == inputs[j]; ++i, --j) ; 
        if(i == strlen(inputs)/2) 
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
