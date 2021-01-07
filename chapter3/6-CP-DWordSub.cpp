#include<cstdio>
#include<cstring>
#include<cctype>

#define MAXN 120
int main()
{
    char inputs[MAXN][MAXN];    
    char s[MAXN], a[MAXN], b[MAXN];

    while(gets(s) && gets(a) &&gets(b))
    {
        int k = 0;
        // TODO: FIX the k number error
        // FIXED: using s[i]!='\0' will triger the index error.
        for(int i=0; i<strlen(s); ) 
        {
            int last = i;
            // when using s[i]!=0 as terminating condition, the acess error will
            // occuor, which i will escape the first '\0'!!
            while(!isspace(s[i]) && s[i] != '\0') ++i;
            strncpy(inputs[k], s+last, i-last);
            inputs[k][i-last] = '\0'; 
            ++i;
            ++k;
        }

        for(int i=0; i<k; ++i)
        {
            if(!strcmp(inputs[i], a)) 
                printf("%s ", b);
            else
            {
                if(i == k-1)
                {
                    printf("%s", inputs[i]);
                    continue;
                }
                printf("%s ", inputs[i]);
            }
        }
        printf("\n");
            
    }
    return 0;
}
