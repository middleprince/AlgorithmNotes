#include<cstdio>
#include<cstring>

int main() 
{
    char a[101], b[101], c[202];
    while(scanf("%s %s", a, b) != EOF)
    {
        memset(c, 0, 202);
        int idx = 0; 
        while(idx < strlen(a))
        {
            c[idx] = a[idx];
            ++idx;
        }
        int i = 0;
        while(i < strlen(b))
        {
            c[idx] = b[i++];
            ++idx;
        }
        
        c[idx] = '\0';
        printf("%s\n", c);
        
    }
    return 0;
}
