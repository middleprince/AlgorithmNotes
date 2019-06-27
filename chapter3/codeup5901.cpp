// 
// Palindrome string problem
#include <cstdio>
#include <cstring>
#define MAX 256

bool isMirror(char s[])
{
    int len = strlen(s);
    for(int i=0; i<len/2; i++){
        if(s[i] != s[len-1-i]) 
            return false;
    }
    return true;
}

int main(void)
{
    char ss[MAX];
    while(gets(ss)){
        if(isMirror(ss))
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
    
}
