#include <cstdio>
#include <cstring>

// 1. take the iputs digits as char string
// 2. take them as number, then get every digits.
int main()
{
    char astr[16], bstr[16]; 
    while(memset(astr, ' ', sizeof(astr)), memset(bstr, ' ', sizeof(bstr)),
            scanf("%s %s", astr, bstr) != EOF){
        int res = 0;
        for(int i=0; i<strlen(astr); ++i)
            for(int j=0; j<strlen(bstr); ++j){
                res += (astr[i] - '0') * (bstr[j]-'0');     
            }
        printf("%d\n", res);
    }
    return 0;
}
